public class Students {
    private String studentName;
    private String[] courses = new String[100];
    private int numberOfCourses;

    public Students(String studentName) {
        this.studentName = studentName;
    }

    public void addCourses(String course) {
        courses[numberOfCourses] = course;
        numberOfCourses++;
    }

    public String[] getCourses() {
        return courses;
    }

    public int getNumberOfCourses() {
        return numberOfCourses;
    }

    public String getStudentName() {
        return studentName;
    }
}
