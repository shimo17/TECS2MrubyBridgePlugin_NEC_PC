# このファイルは tecsgen により自動生成されました
# Makefile.temp は gen の一つ上のディレクトリに移して使用します
#  % mv Makefile.temp Makefile
# 
# clean のデフォルト動作は $(GEN_DIR)/Makefile.* を削除します

TECSGEN_EXE=tecsgen

# 変数 #_MVAR_#
TARGET = sjis.exe
TIMESTAMP = tecsgen.timestamp
CC = gcc
CFLAGS = -I . -I gen -I src -I ../RUNTIME/tecs-runtime/target -I ../RUNTIME/tecs-runtime/workaround -I ../RUNTIME/tecs-runtime/include -I gen
LD = gcc
LDFLAGS = 
GEN_DIR = gen
SRC_DIR = src
vpath %.c $(SRC_DIR) $(GEN_DIR)

vpath %.h $(SRC_DIR) $(GEN_DIR)

# ルール #_MRUL_#
no_target :
	@echo "no target specified"
	@echo "at first or when edit .cdl files, do below"
	@echo "% make tecs"
	@echo "at second, do below"
	@echo "% make all"
	@echo "to clean"
	@echo "% make clean"

all : $(TARGET) 


# depend を include #_MDEP_#
-include gen/Makefile.tecsgen
-include gen/Makefile.depend

$(TARGET) : $(TIMESTAMP) $(CELLTYPE_COBJS) $(TECSGEN_COBJS) $(PLUGIN_COBJS)
	$(LD) $(LDFLGAS) -o $(TARGET) $(TECSGEN_COBJS) $(CELLTYPE_COBJS) $(PLUGIN_COBJS)


clean :
	rm -rf $(GEN_DIR)
	rm -f $(TECS_COBJS)
	rm -f $(TARGET)
	rm -f $(TIMESTAMP)

tecs : $(TIMESTAMP)

$(TIMESTAMP) : $(TECS_IMPORTS)
	$(TECSGEN_EXE) -I gen -I src -I ../RUNTIME/tecs-runtime/target -I ../RUNTIME/tecs-runtime/workaround -I ../RUNTIME/tecs-runtime/include sjis.cdl

	touch $(TIMESTAMP)

tCelltype.o : tCelltype.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
