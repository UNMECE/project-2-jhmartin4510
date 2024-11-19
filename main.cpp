#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

class Student
{
	private:
	std::string name;
	std::string f_name;
	std::string l_name;
	double gpa;
	int grad_year;
	std::string grad_semester;
	int enrolled_year;
	std::string enrolled_semester;
	std::string degree_level; 
	public:
//constructor
	Student()
	{
		name = "Jack Martin";
		gpa = 4.0;
		grad_year = 2027;
		grad_semester = "Spring";
		enrolled_year = 2024;
		enrolled_semester = "Fall";
		degree_level = "UG";
	}
//getter
	std::string getName()
	{
		return name;
	}
	double getGPA()
	{
		return gpa;
	}
	int getGrad_year()
	{
		return grad_year;
	}
	std::string getGrad_semester()
	{
		return grad_semester;
	}
	int getEnrolled_year()
	{
		return enrolled_year;
	}
	std::string getEnrolled_semester()
	{
		return enrolled_semester;
	}
	std::string getDegree_level()
	{
		return degree_level;
	}
//setter
	void setName(std::string f_name, std::string l_name)
	{
		name = f_name + " " + l_name;
	}
	void setGPA(double GPA)
	{
		gpa = GPA;
	}
	void setGrad_year(int Grad_year)
	{
		grad_year = Grad_year;
	}
	void setGrad_semester(std::string Grad_semester)
	{
		grad_semester = Grad_semester;
	}
	void setEnrolled_year(int enrolled_year)
	{
		enrolled_year = enrolled_year;
	}
	void setEnrolled_semester(std::string Enrolled_semester)
	{
		enrolled_semester = Enrolled_semester;
	}
	void setDegree_level(std::string Degree_level)
	{
		degree_level = Degree_level;
	}
//function



//destructor
	~Student(){}
	
};

class Art_Student : public Student
{
	private:
	std::string art_emphasis;
	public:
//constructor
	Art_Student() : Student(){}
//getter
	std::string getArt_Emphasis()
	{
		return art_emphasis;
	}
//setter
	void setArt_Emphasis(std::string Emphasis)
	{
		if(Emphasis  == "Art History")
		{
			art_emphasis = Emphasis;
			std::cout<<"Emphasis add" <<std::endl;
			return;
		}
		else if(Emphasis == "Art Studio")
		{
			art_emphasis = Emphasis;
			std::cout<<"Emphasis added" <<std::endl;
			return;
		}
		else if(Emphasis  == "Art Education")
		{
			art_emphasis = Emphasis;
			std::cout<<"Emphais add" <<std::endl;
			return;
		}	
		std::cout<<"Not a valid Emphasis" <<std::endl;
		return;
	}
//function
//destructor
	~Art_Student(){}
};

class Physics_Student : public Student
{
	private:
	std::string concentration;
	public:
//constructor
	Physics_Student() : Student() {} 
//setter
	void setConcentration(std::string Concentration)
	{
		if(Concentration=="Biophysics")
		{
			concentration = Concentration;
			return;
		}
		else if(Concentration == "Earth and Planetary Sciences")
		{
			concentration = Concentration;
			return;
		}
		std::cout<<"You did not enter a valid Physics Concentration" <<std::endl;
		return;
	}
//getter
	std::string getConcentration()
	{
		return concentration;
	}
//desctructor
	~Physics_Student(){}	
};


int main()
{

std::vector<Art_Student *> art_students;
art_students.push_back(new Art_Student);
art_students[0]->setName("Amelia", "Earhart");
art_students[0]->setGPA(3.8);
art_students[0]->setGrad_year(2024);
art_students[0]->setGrad_semester("Fall");
art_students[0]->setEnrolled_year(2024);
art_students[0]->setEnrolled_semester("Fall");
art_students[0]->setDegree_level("Grad");
art_students[0]->setArt_Emphasis("Art Studio");
art_students.push_back(new Art_Student);
art_students[1]->setName("Nancy", "Landgrab");
art_students[1]->setGPA(2.5);
art_students[1]->setGrad_year(2027);
art_students[1]->setGrad_semester("Spring");
art_students[1]->setEnrolled_year(2024);
art_students[1]->setEnrolled_semester("Fall");
art_students[1]->setDegree_level("UG");
art_students[1]->setArt_Emphasis("Art Studio");
art_students.push_back(new Art_Student);
art_students[2]->setName("Art","Wold");
art_students[2]->setGPA(4.1);
art_students[2]->setGrad_year(2024);
art_students[2]->setGrad_semester("Fall");
art_students[2]->setEnrolled_year(2024);
art_students[2]->setEnrolled_semester("Fall");
art_students[2]->setDegree_level("Grad");
art_students[2]->setArt_Emphasis("Art Education");
art_students.push_back(new Art_Student);
art_students[3]->setName("Andrew","Wyeth");
art_students[3]->setGPA(3.5);
art_students[3]->setGrad_year(1965);
art_students[3]->setGrad_semester("Spring");
art_students[3]->setEnrolled_year(1961);
art_students[3]->setEnrolled_semester("Fall");
art_students[3]->setDegree_level("UG");
art_students[3]->setArt_Emphasis("Art Studio");
art_students.push_back(new Art_Student);
art_students[4]->setName("Norman","Rockwell");
art_students[4]->setGPA(3.2);
art_students[4]->setGrad_year(1955);
art_students[4]->setGrad_semester("Spring");
art_students[4]->setEnrolled_year(1951);
art_students[4]->setEnrolled_semester("Fall");
art_students[4]->setDegree_level("Grad");
art_students[4]->setArt_Emphasis("Art History");

std::vector<Physics_Student *> p_students;
p_students.push_back(new Physics_Student);
p_students[0]->setName("Isaac","Asimov");
p_students[0]->setGPA(3.9);
p_students[0]->setGrad_year(1980);
p_students[0]->setGrad_semester("Summer");
p_students[0]->setEnrolled_year(1974);
p_students[0]->setEnrolled_semester("Fall");
p_students[0]->setDegree_level("Grad");
p_students[0]->setConcentration("Earth and Planetary Sciences");
p_students.push_back(new Physics_Student);
p_students[1]->setName("Robert", "Oppie");
p_students[1]->setGPA(4.0);
p_students[1]->setGrad_year(1940);
p_students[1]->setGrad_semester("Spring");
p_students[1]->setEnrolled_year(1932);
p_students[1]->setEnrolled_semester("Fall");
p_students[1]->setDegree_level("Grad");
p_students[1]->setConcentration("Biophysics");
p_students.push_back(new Physics_Student);
p_students[2]->setName("Marie","Currie");
p_students[2]->setGPA(3.7);
p_students[2]->setGrad_year(1930);
p_students[2]->setGrad_semester("Fall");
p_students[2]->setEnrolled_year(1922);
p_students[2]->setEnrolled_semester("Fall");
p_students[2]->setDegree_level("Grad");
p_students[2]->setConcentration("Biophysics");
p_students.push_back(new Physics_Student);
p_students[3]->setName("Albert","Einstein");
p_students[3]->setGPA(3.9);
p_students[3]->setGrad_year(1928);
p_students[3]->setGrad_semester("Spring");
p_students[3]->setEnrolled_year(1919);
p_students[3]->setEnrolled_semester("Summer");
p_students[3]->setDegree_level("Grad");
p_students[3]->setConcentration("Earth and Planetary Sciences");
p_students.push_back(new Physics_Student);
p_students[4]->setConcentration("Biophysics");

std::ofstream MyFile;
std::ostringstream os;
MyFile.open("student_info.dat", std::ios::out);
os <<"Name:\tGPA\tGrad Year\tGrad Semester\tEnrolled Year\tEnrolled Semester\tDegree Level\tArt Emphasis " <<std::endl;
for(int i = 0; i<art_students.size(); i++)
{
	os <<art_students[i]->getName() <<"\t"; 
	os <<art_students[i]->getGPA() <<"\t"; 
	os <<art_students[i]->getGrad_year() <<"\t"; 
	os <<art_students[i]->getGrad_semester() <<"\t";
	os <<art_students[i]->getEnrolled_year() <<"\t";
	os <<art_students[i]->getEnrolled_semester() <<"\t";
	os <<art_students[i]->getDegree_level() <<"\t";
	os <<art_students[i]->getArt_Emphasis() <<"\t";
	os <<std::endl;
}
for(int i = 0; i<p_students.size();i++)
{
	os <<p_students[i]->getName() <<"\t";
	os <<p_students[i]->getGPA() <<"\t";
	os <<p_students[i]->getGrad_year() <<"\t";
	os <<p_students[i]->getGrad_semester() <<"\t";
	os <<p_students[i]->getEnrolled_year() <<"\t";
	os <<p_students[i]->getEnrolled_semester() <<"\t";
	os <<p_students[i]->getDegree_level() <<"\t";
	os <<p_students[i]->getConcentration() <<"\t";
	os <<std::endl;
}

MyFile<<os.str();
MyFile.close();

for(int i = 0; i<art_students.size();i++)
{
	delete art_students[i];
	delete p_students[i];
}

art_students.clear();
p_students.clear();

return 0;
}


