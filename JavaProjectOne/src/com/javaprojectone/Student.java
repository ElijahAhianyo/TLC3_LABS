package com.javaprojectone;

import java.util.ArrayList;
import java.util.List;

public class Student {
//    ArrayList<Double> TestArray= new ArrayList<Double> ([]);

    private List<Double> StudentGradeList = new ArrayList<Double>();

    Student(List<Double> StudentGradeList){
        this.StudentGradeList = StudentGradeList;
    }
//    Student(){
//
//    }

    public Double GetAverageGrade(){
        Double sum = 0.0;
        for(int i = 0; i< this.StudentGradeList.size();i++){
            sum += this.StudentGradeList.get(i);
        }
        return sum/this.StudentGradeList.size();

    }

}
