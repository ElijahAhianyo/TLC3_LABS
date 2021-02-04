package com.javaprojectone;

import java.util.List;

public class NaughtyStudent extends Student{


    NaughtyStudent(List<Double> StudentGradeList) {
        super(StudentGradeList);
    }
    @Override
    public Double GetAverageGrade(){
        double averageGrade= super.GetAverageGrade();
        return  averageGrade + (averageGrade/100) * 10;

    }
}
