public class Triangle2D {
    private MyPoint p1,p2,p3;

    public void setP1(double x,double y){
        p1=new MyPoint(x,y);
    }

    public MyPoint getP1(){
        return p1;
    }

    public void setP2(double x,double y){
        p2=new MyPoint(x,y);
    }

    public MyPoint getP2(){
        return p2;
    }

    public void setP3(double x,double y){
        p3=new MyPoint(x,y);
    }

    public MyPoint getP3(){
        return p3;
    }

    public Triangle2D(){
        setP1(0,0);
        setP2(1,1);
        setP3(2,5);
    }

    public Triangle2D(MyPoint p1,MyPoint p2,MyPoint p3){
        setP1(p1.getX(),p1.getY());
        setP2(p2.getX(),p2.getY());
        setP3(p3.getX(),p3.getY());
    }

    public double getPerimeter(){
        double distance=MyPoint.distance(getP1(),getP2())
                +MyPoint.distance(getP1(),getP3())
                +MyPoint.distance(getP2(),getP3());
        return distance;
    }
    public double getArea(){
        double s=getPerimeter()/2;
        return Math.pow(s*(s-MyPoint.distance(getP1(),getP2()))
                *(s-MyPoint.distance(getP1(),getP3()))
                *(s-MyPoint.distance(getP2(),getP3())),0.5);
    }
}
