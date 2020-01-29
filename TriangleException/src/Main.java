public class Main {

    public static void main(String[] args) {
        try {
            Triangle triangle=new Triangle(1,1,2);
        }catch (IllegalTriangleException e){
            System.out.println("Triangle: "+e);
        }
        try{
            Triangle triangle1=new Triangle(3,4,5);
        }catch (IllegalTriangleException e){
            System.out.println(e);
        }
    }
}
