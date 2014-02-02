CC=g++ -c -Iinclude
LD=g++


FILES=Arena Gladiator Samnis Thraex SamnisBestiarius SamnisEques ThraexEssedarius ThraexMyrmilo

SRC=$(addprefix src/, $(addsuffix .cpp, $(FILES)))
OBJ=$(addprefix obj/, $(addsuffix .o, $(FILES)))
TGT=Arena

all:
	make $(TGT)

$(TGT): obj $(OBJ)
	$(LD) $(OBJ) -o $(TGT)

obj:
	mkdir obj

obj/%.o: src/%.cpp
	$(CC) $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJ) $(TGT)

remake: clean all
