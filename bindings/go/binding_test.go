package tree_sitter_yasnippet_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-yasnippet"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_yasnippet.Language())
	if language == nil {
		t.Errorf("Error loading Yasnippet grammar")
	}
}
