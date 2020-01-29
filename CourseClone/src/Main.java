public class Main {

    public static void main(String[] args) {
        Student student1=new Student("Peter Jones");
        Course course1 = new Course("Data Structures");
        Course course2 = new Course("Database Systems");
        course1.addStudent(student1);
        student1.addCourses(course1.getCourseName());
        course1.addStudent(new Student("Brian Smith",course1));
        course1.addStudent(new Student("Anne Kennedy",course1));
        course2.addStudent(student1);
        student1.addCourses(course1.getCourseName());
        course2.addStudent(new Student("Steve Smith",course2));
        course2.addStudent(new Student("Anne Kennedy",course2));
        System.out.println("Number of students in course1: " + course1.getNumberOfStudents());
        Student[] students1 = course1.getStudents();
        for (int i = 0; i < course1.getNumberOfStudents(); i++)
        {
            System.out.print(students1[i].getStudentName()+"-"+students1[i].getNumberOfCourses()+":"+students1[i].getCourses() + " ");
        }
        System.out.println();
        System.out.print("Number of students in course2: "
        + course2.getNumberOfStudents());
        System.out.println();
        Student[] students2 = course2.getStudents();
        for (int i = 0; i < course2.getNumberOfStudents(); i++)
        {
            System.out.print(students2[i].getStudentName()+"-"+students2[i].getNumberOfCourses()+":"+students2[i].getCourses() + " ");
        }
    }
}
