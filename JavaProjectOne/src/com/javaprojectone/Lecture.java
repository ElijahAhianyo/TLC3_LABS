package com.javaprojectone;

import java.util.ArrayList;
import java.util.List;

public class Lecture {
    private List<Student> StudentList = new ArrayList<>();

    public void enter(Student studentObject){
        this.StudentList.add(studentObject);

    }
    public List<Student> getter(){
        return StudentList;
    }
    public Double getHighestAverageGrade(){
        double highest = 0.0;
        for(Student student: this.StudentList ){
            if(student.GetAverageGrade()>highest)
                highest = student.GetAverageGrade();
        }
        return highest;
    }

}
