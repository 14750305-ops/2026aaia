//week06-2

void setup(){
  size(800, 500);
}

int[][]a=new int[10][16];
//void mousePressed(){
void mouseDragged(){
  int i = mouseY/50, j = mouseX/50;
  a[i][j]=60;
}
void draw(){
  background(255);
  for(int i=0; i<10; i++){
    for(int j=0; j<16; j++){
      if (a[i][j]>0){
        fill(#F464F7, a[i][j]*4);
        a[i][j]--;
      }
      else fill(255);
      rect(j*50, i*50, 50, 50);
    }
  }
}
