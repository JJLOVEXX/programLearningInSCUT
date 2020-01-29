public class Main {

    public static void main(String[] args) {
        MyPoint p1=new MyPoint(0,0);
        MyPoint p2=new MyPoint(10,30.5);
        double distance=MyPoint.distance(p1,p2);

        System.out.println(distance);
    }
}
