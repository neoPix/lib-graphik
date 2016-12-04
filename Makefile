.PHONY: clean All

All:
	@echo "----------Building project:[ app - Debug ]----------"
	@cd "app" && "$(MAKE)" -f  "app.mk"
clean:
	@echo "----------Cleaning project:[ app - Debug ]----------"
	@cd "app" && "$(MAKE)" -f  "app.mk" clean
