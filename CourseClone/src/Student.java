public class Student {
    private String studentName;
    private String[] courses = new String[100];
    private int numberOfCourses;

    public Student(String studentName){
        this.studentName = studentName;
    }
    public Student(String studentName, Course course) {
        this.studentName = studentName;
        this.addCourses(course.getCourseName());
    }

    public void addCourses(String course) {
        courses[numberOfCourses] = course;
        numberOfCourses++;
    }

    public String getCourses() {
        for(int i=0;i<getNumberOfCourses();i++)
        {
            return courses[i];
        }
        return "Course";
    }

    public int getNumberOfCourses() {
        return numberOfCourses;
    }

    public String getStudentName() {
        return studentName;
    }

}