public class Main {

    public static void main(String[] args) {
       Student student=new Student("Chen LiJian","SCUT","123456789","895846885@qq.com",2);

       System.out.println(student);

       Faculty faculty=new Faculty("Liu Yanxia","SCUT","987654321","Liuyanxia@QQ.com","B7",15000,"2018 10 3",8.5,3);

       System.out.println(faculty);

       Staff staff=new Staff("Liu Guixi","SCUT","13579","Liuguixi@qq.com","B8",12000,"2018 10 3","Professor");

       System.out.println(staff);
    }
}
