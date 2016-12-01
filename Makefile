.PHONY: clean All

All:
	@echo "----------Building project:[ Graphik - Debug ]----------"
	@cd "Graphik" && "$(MAKE)" -f  "Graphik.mk"
clean:
	@echo "----------Cleaning project:[ Graphik - Debug ]----------"
	@cd "Graphik" && "$(MAKE)" -f  "Graphik.mk" clean
