//week12-1
void setup(){
  size(500,500);
}
float a=0;
void draw(){
  background(#FFFFF2);
  for(int i=0;i<6;i++){
    float x=250+cos(a+i*PI/3)*200, y=250+sin(a+i*PI/3)*200;
    //ellipse(x,y,10,10);
    rect(x-40, y-50, 80, 100);
  }
  a+=0.03;
}
