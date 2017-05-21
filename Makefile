.PHONY: clean All

All:
	@echo "----------Building project:[ SAL - Release ]----------"
	@"$(MAKE)" -f  "SAL.mk"
clean:
	@echo "----------Cleaning project:[ SAL - Release ]----------"
	@"$(MAKE)" -f  "SAL.mk" clean
