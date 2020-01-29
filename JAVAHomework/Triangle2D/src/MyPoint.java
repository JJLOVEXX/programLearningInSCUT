public class MyPoint {
    private double x,y;

    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }

    public MyPoint(){
        x=0;y=0;
    }
    MyPoint(double x, double y){
        this.x=x;
        this.y=y;
    }
    public static double distance(MyPoint p1, MyPoint p2){
        double xTemp=p1.getX()-p2.getX();
        double yTemp=p1.getY()-p2.getY();
        return Math.pow((xTemp*xTemp+yTemp*yTemp),0.5);
    }
    public double distance(double x1,double y1,double x2,double y2){
        double xTemp=x1-x2;
        double yTemp=y1-y2;
        return Math.pow((xTemp*xTemp+yTemp*yTemp),0.5);
    }
    public double distance(double x,double y,MyPoint p){
        double xTemp=p.getX()-x;
        double yTemp=p.getY()-y;
        return Math.pow((xTemp*xTemp+yTemp*yTemp),0.5);
    }
}
