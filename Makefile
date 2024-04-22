SHELL  = /bin/bash

.PHONY: build test run
build: parser/yasnippet.so

run: test ## Run tree-sitter playground with web UI
	npm run web

test: ## Run tests in corpus
	@npm run test

install:
	@npm --loglevel=warn --progress=true install
	@npm run build

parser/yasnippet.so: src/parser.c ## Compile parser shared library
	$(RM) $@
	mkdir -p parser
	$(CC) -o $@ -Isrc $^ -shared -fPIC -Os

libtree-sitter-yasnippet.so: src/parser.c ## Compile parser for emacs
	$(CC) -fPIC -c -Isrc src/parser.c
	$(CC) -fPIC -shared -o $@ *.o

.PHONY: clean distclean
clean:
	$(RM) -r *~ *.core *.o *.out *.exe

distclean: clean
	$(RM) -rf $$(git ls-files --others --ignored --exclude-standard)

.PHONY: help
help: ## Show help for targets
	@grep -E '^[/.%0-9a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) |     \
	sort | awk \
	'BEGIN {FS = ":[^:#]*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'
