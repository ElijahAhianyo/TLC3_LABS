package com.javaprojectone;

import java.util.ArrayList;
import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
	// write your code here
        ArrayList<Double> studentGrades = new ArrayList<Double>(Arrays.asList(20.3,45.6,70.9));
        ArrayList<Double> SecondStudentGrades = new ArrayList<Double>(Arrays.asList(98.2,50.5,53.9));
        Student studentObject = new Student(studentGrades);
        Student secondStudent = new Student(SecondStudentGrades);
        Lecture lecture = new Lecture();
        lecture.enter(studentObject);
        lecture.enter(secondStudent);

        System.out.println(lecture.getHighestAverageGrade());

//        System.out.println(studentObject.GetAverageGrade());
    }
}
