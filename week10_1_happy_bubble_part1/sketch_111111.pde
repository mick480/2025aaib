//int a, b;很像之前教過的 int 整數宣告
PImage toy1, toy2;
void setup(){
  size(400, 495);
  toy1 = loadImage("toy1.jpg");
  toy2 = loadImage("toy2.jpg");
}
void draw(){
  background(toy1);
  if(mousePressed) image(toy2, 0, 0);
}
