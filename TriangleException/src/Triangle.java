public class Triangle extends GeometricObject {
    double side1 = 1.0, side2 = 1.0, side3 = 1.0;

    public Triangle() {

    }

    public Triangle(double side1, double side2, double side3) throws IllegalTriangleException {
        if(side1+side2<=side3||side1+side3<=side2||side2+side3<=side1){
            throw new IllegalTriangleException("This case does not satisfy the law that " +
                    "the sum of any two sides is always greater than the third side.");
        }
        else{
            System.out.println("Triangle is a Success.");
        }
    }

    public void setSide1(double side1) {
        this.side1 = side1;
    }

    public void setSide2(double side2) {
        this.side2 = side2;
    }

    public void setSide3(double side3) {
        this.side3 = side3;
    }

    public double getArea(){
        double s=(side1+side2+side3)/2;
        return Math.sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }

    public double getPerimeter(){
        return side1+side2+side3;
    }

    @Override
    public String toString() {
        return "Triangle: side1= "+side1+" side2= "+side2+" side3= "+side3;
    }
}
