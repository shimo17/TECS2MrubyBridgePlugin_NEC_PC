#include"tecs_mruby.h"
#include"tTECS2MrubyVM_tecsgen.h"

void mrb_init_mrb(CELLCB *p_cellcb, mrb_state *mrb);
static mrb_value mrb_run(mrb_state *mrb, const struct RProc* proc, mrb_value self);
void 
eTECS2MrubyVM_init(CELLIDX idx)
{
	CELLCB	*p_cellcb = GET_CELLCB(idx);
	VAR_mrb = mrb_open();
	VAR_context = mrbc_context_new( VAR_mrb );
	mrb_init_mrb(p_cellcb, VAR_mrb);
	
}
mrb_state*
eTECS2MrubyVM_get_mrb(CELLIDX idx)
{
	CELLCB	*p_cellcb = GET_CELLCB(idx);
	return VAR_mrb;
}

void
eTECS2MrubyVM_fin(CELLIDX idx)
{
	CELLCB	*p_cellcb = GET_CELLCB(idx);
	mrbc_context_free( VAR_mrb, VAR_context );//これ以上VMを使わないという意味になる
	mrb_close( VAR_mrb );
}

static mrb_value
mrb_run(mrb_state *mrb, const struct RProc *proc, mrb_value self)
{
  if (mrb->c->ci->argc < 0) {
    return mrb_vm_run(mrb, proc, self, 3); /* receiver, args and block) */
  }
  else {
    return mrb_vm_run(mrb, proc, self, mrb->c->ci->argc + 2); /* argc + 2 (receiver and block) */
  }
}
void
mrb_init_mrb(CELLCB	*p_cellcb, mrb_state *mrb)
{
  mrb_irep *irep = mrb_read_irep(VAR_mrb, ATTR_irep);

  mrb_run(VAR_mrb, mrb_proc_new(VAR_mrb, ATTR_irep), mrb_top_self(VAR_mrb));
  if (VAR_mrb->exc) {
    mrb_p(VAR_mrb, mrb_obj_value(VAR_mrb->exc));
    exit(0);
  }
}