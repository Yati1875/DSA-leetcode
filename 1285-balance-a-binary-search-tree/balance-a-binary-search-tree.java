/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode balanceBST(TreeNode root) {
        List<TreeNode> nodes= new ArrayList<>();
        inorder(root,nodes);
        return build(nodes,0,nodes.size()-1);
        
    }
    private static void inorder(TreeNode root,List<TreeNode> nodes){
        if(root==null) return;
        inorder(root.left, nodes);
        nodes.add(root);
        inorder(root.right, nodes);
    }
     private static TreeNode build(List<TreeNode> nodes, int l, int r){
        if(l>r) return null;
        int mid=(l+r)/2;
        TreeNode root=nodes.get(mid);
        root.left=build(nodes,l,mid-1);
        root.right=build(nodes,mid+1,r);
        return root;
     }
}