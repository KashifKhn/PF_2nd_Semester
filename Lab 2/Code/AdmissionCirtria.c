/* 5. Write a program to determine eligibility for admission to a professional course based on the following criteria:
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :The candidate is not eligible for admission.  */

#include <stdio.h>

int main()
{
    int marksPhy, marksMath, marksChem, totalMarks, totalMarksPhyMath;
    printf("Enter the marks of Physics = ");
    scanf("%d",&marksPhy);

    printf("Enter the marks of Maht = ");
    scanf("%d",&marksMath);

    printf("Enter the marks of Chemistry = ");
    scanf("%d",&marksChem);

    totalMarks = marksPhy + marksMath + marksChem;

    totalMarksPhyMath = marksMath + marksPhy;

    if(marksMath<65 && marksPhy< 55 && marksChem < 50 && totalMarks <190 || totalMarksPhyMath < 140)
        printf("The Student are not Eligible for the admission \n");
    else
        printf("The Student are Eligible for the Admission\n");
    
}