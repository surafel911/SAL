.PHONY: clean All

All:
	@echo "----------Building project:[ SAL_Test - Release ]----------"
	@"$(MAKE)" -f  "SAL_Test.mk"
clean:
	@echo "----------Cleaning project:[ SAL_Test - Release ]----------"
	@"$(MAKE)" -f  "SAL_Test.mk" clean
