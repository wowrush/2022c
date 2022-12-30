void setup(){
  size(400,400,P3D);
}

void draw(){
  background(##908282);
  translate(width/2,height/2);
  rotateY(radians(frameCount));
  rotateX(radians(frameCount));
  box(100);
}
