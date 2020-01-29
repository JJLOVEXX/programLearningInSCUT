public class Course {
    private String courseName;
    private Student[] students = new Student[100];
    private int numberOfStudents;

    public Course(String courseName) {
        this.courseName = courseName;
    }

    public void addStudent(Student student) {
        students[numberOfStudents] = student;
        numberOfStudents++;
    }

    public Student[] getStudents() {
        return students;
    }

    public int getNumberOfStudents() {
        return numberOfStudents;
    }

    public String getCourseName() {
        return courseName;
    }
}