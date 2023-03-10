package ynov;

public class Student {
	
	private String name;
	
	private Integer age;
	
	public Student(String name, Integer age) {
		this.name = name;
		this.age = age;
	}
	
	public String getName() {
		return name;
	}
	
	public Integer getAge() {
		return age;
	}

	public String toString() {
		return "Student:name=" + name + ", age=" + age;
	}
}