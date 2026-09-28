CC := clang
CFLAGS := -Wall -Wextra -std=c11

# Récupère le nom de fichier passé après "run" (ex: make run foo.c ou make run foo)
ARGS := $(filter-out run clean,$(MAKECMDGOALS))
FILE := $(firstword $(ARGS))
NAME := $(basename $(notdir $(FILE)))

.PHONY: run clean $(ARGS)

run:
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make run <fichier.c>"; \
		exit 1; \
	fi
	$(CC) $(CFLAGS) $(FILE) -o $(NAME)
	@echo "--- Exécution ---"
	@./$(NAME)
	@$(MAKE) clean NAME=$(NAME)

clean:
	@rm -f $(NAME)

# Crée une règle explicite pour chaque argument afin d'éviter "Nothing to be done"
$(foreach arg,$(ARGS),$(eval $(arg): ; @:))
