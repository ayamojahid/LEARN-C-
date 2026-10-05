#include <iostream> 
using namespace std;

enum enColor {Red , Green, Yellow, Blue};
enum enGender {Male, Female};
enum enMaritalStatus {Single , Married};

struct stAddress {
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};

struct stContactInfo {
    string Phone;
    string Email;
    stAddress Address;
};

struct  stPerson
{
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enGender Gendor;
    enColor FavourateColor;
    enMaritalStatus MaritalStatues ;

};

int main() {
stPerson Person1;

Person1.FirstName= "Aya";
Person1.LastName= "Mojahid";

Person1.ContactInfo.Email="aya@gmail.com";
Person1.ContactInfo.Phone="+212600123456";

Person1.ContactInfo.Address.BuildingNo="313";
Person1.ContactInfo.Address.POBox="7777";
Person1.ContactInfo.Address.StreetName="Queen1 Street";
Person1.ContactInfo.Address.ZipCode="11194";

Person1.Gendor = enGender::Male;
Person1.FavourateColor = enColor::Green;
Person1.MaritalStatues=enMaritalStatus::Married;

cout << Person1.ContactInfo.Address.StreetName << endl; 
cout << Person1.FavourateColor << endl;

return 0;
};
