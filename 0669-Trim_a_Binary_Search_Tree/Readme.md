## Discussion fo solution

This is a solution with flaw.
Because we don't really delete the TreeNode.

- if `node<L || node>R` than we should return `node->left || node right`.