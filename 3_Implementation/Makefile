PROJ_NAME = PathFinding
SRC = src/Project.c\
src/PathFinding.c\

TEST_SRC = src/test_Path.c\
unity/unity.c\
src/Project.c\


ifdef OS
 RM = del /q
 FixPath = $(subst /,\,$1)
EXEC = exe 
else
 ifeq ($(shell uname), Linux)
  RM = rm -rf
  FixPath = $1
  EXEC = out
 endif
endif

INC=-Iinclude\
-Iunity\

Build:
	gcc	$(SRC)	$(INC)	-o	$(call	FixPath,$(PROJ_NAME).$(EXEC))
run:Build
	./$(call	FixPath,$(PROJ_NAME).$(EXEC))

Build_test:
	gcc	$(TEST_SRC)	$(INC)	-o	$(call	FixPath,$(PROJ_NAME).$(EXEC))
run:Build_test
	./$(call	FixPath,$(PROJ_NAME).$(EXEC))


staticcheck:
	cppcheck	--enable=all	-Iunity	.
dynamiccheck:Build
	valgrind	./$(call	FixPath,$(PROJ_NAME).$(EXEC))

coverage:
	gcc -fprof-arcs -ftest-coverage	$(SRC)	$(INC)	-o	$(call	FixPath,$(PROJ_NAME).$(EXEC))
	gcov	-a	./$(call	FixPath,$(PROJ_NAME).$(EXEC))