





Node* BuildTree(char postorder[], char inorder[], in size){
  


  //找到根的值在中序中出现的位置，放到r变量中
  int r = -1;
  for (int i = 0; i < size;  i++){
    if(inorder[i] == postorder[size - 1]){
      r = i;
      break;
    }
  }
}
