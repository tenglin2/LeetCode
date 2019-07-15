/**
 * We want to check if a node exists inside of a specific tree, given the root tree node. The node declaration has instance variables of val, left, and right.
 * @param {TreeNode} root is the given root of the tree.
 * @param {number} val is the target value that we want to find inside of the binary search tree.
 * @return {TreeNode} return the actual node with the found value, or return null if you can't find it.
 * // Most obvious solution is to use recursive traversal and check if the current node matches.
 */
const searchBST = function(root, val) {
	const search = function(root, val) {
		if (root.val === val) return root;
		else if (val < root.val && root.left !== null) {
			return search(root.left, val);
		} else if (val > root.val && root.right !== null) {
			return search(root.right, val);
		} else return [];
	};

	return search(root, val);
};
