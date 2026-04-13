//week08-2 ¶Â¥Õ´Ñ¤¬°Êª©
void setup() {
  size(620, 620);
}
int[][] board = new int[10][10];
void mousePressed(){
  int i = (mouseY-10)/60, j = (mouseX-10)/60;
  if(mouseButton==LEFT) board[i][j] = 1;
  if(mouseButton==RIGHT) board[i][j] = 2;
  if(mouseButton==CENTER) board[i][j] = 0;
}
void draw() {
  background(#9B4A08);
  for (int i=0; i<10; i++) {//°ª
    for (int j=0; j<10; j++) {//¼e
      int x=10+j*60, y=10+i*60;
      fill(#9B4A08);
      strokeWeight(2);
      rect(x, y, 60, 60);
      if(board[i][j] == 1) fill(0);
      if(board[i][j] == 2) fill(255);
      if(board[i][j] != 0) ellipse(30+ x,30+y,50,50);
    }
  }
}
