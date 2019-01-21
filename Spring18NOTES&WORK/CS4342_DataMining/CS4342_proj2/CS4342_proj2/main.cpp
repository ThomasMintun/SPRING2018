#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

double manhattan(double x2,double y2,double x1,double y1){
    double distance;
    double rise = fabs(x2 - x1);
    double run = fabs(y2 - y1);
    distance = rise + run;
    return distance;
}

int main(){
    cout << fixed << showpoint << std::setprecision(1);
    srand(time(0));
    int cluster1 = 0; //counter to hold occurances of data points in cluster1
    int cluster2 = 0; //counter to hold occurances of data points in cluster2
    int clusterK1 = 0; //counter for k = 4
    int clusterK2 = 0; //counter for k = 4
    int clusterK3 = 0; //counter for k = 4
    int clusterK4 = 0; //counter for k = 4
    int cluster11 = 0; //counter for k = 2 manhattan
    int cluster22 = 0; //counter for k = 2 manhattan
    
    double x1 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y1 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x2 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y2 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x3 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y3 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x4 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y4 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x5 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y5 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x6 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y6 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x7 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y7 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x8 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y8 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x9 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y9 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x10 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y10 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x11 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y11 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x12 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y12 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x13 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y13 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x14 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y14 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x15 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y15 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x16 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y16 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x17 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y17 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x18 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y18 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x19 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y19 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    double x20 = (1+(rand()%100))+((double) rand() / (RAND_MAX)), y20 = (1+(rand()%100))+((double) rand() / (RAND_MAX));
    
    //START euclidian K=2
    double centroidX1 = x19, centroidY1 =  y19;//initial cintroids chosen at random for K=2
    double centroidX2 = x20, centroidY2 =  y20;//initial cintroids chosen at random for K=2
    cout << "Centroid1 is randomly initiated at (" << centroidX1 << "," << centroidY1 << ").\n"; //initial cintroids chosen at random
    cout << "Centroid2 is randomly initiated at (" << centroidX2 << "," << centroidY2 << ").\n"; //initial cintroids chosen at random
    //START data point 1
    double distance1 = sqrt(pow(x1 - centroidX1, 2) + pow(y1 - centroidY1, 2));
    double distance2 = sqrt(pow(x1 - centroidX2, 2) + pow(y1 - centroidY2, 2));
    if (distance1 < distance2){
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x1;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y1;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x1;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y1;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 2
    double distance3 = sqrt(pow(x2 - centroidX1, 2) + pow(y2 - centroidY1, 2));
    double distance4 = sqrt(pow(x2 - centroidX2, 2) + pow(y2 - centroidY2, 2));
    if (distance3 < distance4){
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x2;
        centroidX1 = centroidX1/2;
        centroidY1 += y2;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x2;
        centroidX2 = centroidX2/2;
        centroidY2 += y2;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 3
    double distance5 = sqrt(pow(x3 - centroidX1, 2) + pow(y3 - centroidY1, 2));
    double distance6 = sqrt(pow(x3 - centroidX2, 2) + pow(y3 - centroidY2, 2));
    if (distance5 < distance6){
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x3;
        centroidX1 = centroidX1/2;
        centroidY1 += y3;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x3;
        centroidX2 = centroidX2/2;
        centroidY2 += y3;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 4
    double distance7 = sqrt(pow(x4 - centroidX1, 2) + pow(y4 - centroidY1, 2));
    double distance8 = sqrt(pow(x4 - centroidX2, 2) + pow(y4 - centroidY2, 2));
    if (distance7 < distance8){
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x4;
        centroidX1 = centroidX1/2;
        centroidY1 += y4;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x4;
        centroidX2 = centroidX2/2;
        centroidY2 += y4;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 5
    double distance9 = sqrt(pow(x5 - centroidX1, 2) + pow(y5 - centroidY1, 2));
    double distance10 = sqrt(pow(x5 - centroidX2, 2) + pow(y5 - centroidY2, 2));
    if (distance9 < distance10){
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x5;
        centroidX1 = centroidX1/2;
        centroidY1 += y5;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x5;
        centroidX2 = centroidX2/2;
        centroidY2 += y5;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 6
    double distance11 = sqrt(pow(x6 - centroidX1, 2) + pow(y6 - centroidY1, 2));
    double distance12 = sqrt(pow(x6 - centroidX2, 2) + pow(y6 - centroidY2, 2));
    if (distance11 < distance12){
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x6;
        centroidX1 = centroidX1/2;
        centroidY1 += y6;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x6;
        centroidX2 = centroidX2/2;
        centroidY2 += y6;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 7
    double distance13 = sqrt(pow(x7 - centroidX1, 2) + pow(y7 - centroidY1, 2));
    double distance14 = sqrt(pow(x7 - centroidX2, 2) + pow(y7 - centroidY2, 2));
    if (distance13 < distance14){
        cout << "Point7: (" << x7 << "," << y7 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x7;
        centroidX1 = centroidX1/2;
        centroidY1 += y7;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point7: (" << x7 << "," << y7 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x7;
        centroidX2 = centroidX2/2;
        centroidY2 += y7;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 8
    double distance15 = sqrt(pow(x8 - centroidX1, 2) + pow(y8 - centroidY1, 2));
    double distance16 = sqrt(pow(x8 - centroidX2, 2) + pow(y8 - centroidY2, 2));
    if (distance15 < distance16){
        cout << "Point8: (" << x8 << "," << y8 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x8;
        centroidX1 = centroidX1/2;
        centroidY1 += y8;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point8: (" << x8 << "," << y8 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x8;
        centroidX2 = centroidX2/2;
        centroidY2 += y8;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 9
    double distance17 = sqrt(pow(x9 - centroidX1, 2) + pow(y9 - centroidY1, 2));
    double distance18 = sqrt(pow(x9 - centroidX2, 2) + pow(y9 - centroidY2, 2));
    if (distance17 < distance18){
        cout << "Point9: (" << x9 << "," << y9 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x9;
        centroidX1 = centroidX1/2;
        centroidY1 += y9;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point9: (" << x9 << "," << y9 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x9;
        centroidX2 = centroidX2/2;
        centroidY2 += y9;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 10
    double distance19 = sqrt(pow(x10 - centroidX1, 2) + pow(y10 - centroidY1, 2));
    double distance20 = sqrt(pow(x10 - centroidX2, 2) + pow(y10 - centroidY2, 2));
    if (distance19 < distance20){
        cout << "Point10: (" << x10 << "," << y10 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x10;
        centroidX1 = centroidX1/2;
        centroidY1 += y10;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point10: (" << x10 << "," << y10 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x10;
        centroidX2 = centroidX2/2;
        centroidY2 += y10;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 11
    double distance21 = sqrt(pow(x11 - centroidX1, 2) + pow(y11 - centroidY1, 2));
    double distance22 = sqrt(pow(x11 - centroidX2, 2) + pow(y11 - centroidY2, 2));
    if (distance21 < distance22){
        cout << "Point11: (" << x11 << "," << y11 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x11;
        centroidX1 = centroidX1/2;
        centroidY1 += y11;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point11: (" << x11 << "," << y11 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x11;
        centroidX2 = centroidX2/2;
        centroidY2 += y11;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 12
    double distance23 = sqrt(pow(x12 - centroidX1, 2) + pow(y12 - centroidY1, 2));
    double distance24 = sqrt(pow(x12 - centroidX2, 2) + pow(y12 - centroidY2, 2));
    if (distance23 < distance24){
        cout << "Point12: (" << x12 << "," << y12 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x12;
        centroidX1 = centroidX1/2;
        centroidY1 += y12;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point12: (" << x12 << "," << y12 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x12;
        centroidX2 = centroidX2/2;
        centroidY2 += y12;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 13
    double distance25 = sqrt(pow(x13 - centroidX1, 2) + pow(y13 - centroidY1, 2));
    double distance26 = sqrt(pow(x13 - centroidX2, 2) + pow(y13 - centroidY2, 2));
    if (distance25 < distance26){
        cout << "Point13: (" << x13 << "," << y13 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x13;
        centroidX1 = centroidX1/2;
        centroidY1 += y13;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point13: (" << x13 << "," << y13 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x13;
        centroidX2 = centroidX2/2;
        centroidY2 += y13;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 14
    double distance27 = sqrt(pow(x14 - centroidX1, 2) + pow(y14 - centroidY1, 2));
    double distance28 = sqrt(pow(x14 - centroidX2, 2) + pow(y14 - centroidY2, 2));
    if (distance27 < distance28){
        cout << "Point14: (" << x14 << "," << y14 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x14;
        centroidX1 = centroidX1/2;
        centroidY1 += y14;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point14: (" << x14 << "," << y14 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x14;
        centroidX2 = centroidX2/2;
        centroidY2 += y14;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 15
    double distance29 = sqrt(pow(x15 - centroidX1, 2) + pow(y15 - centroidY1, 2));
    double distance30 = sqrt(pow(x15 - centroidX2, 2) + pow(y15 - centroidY2, 2));
    if (distance29 < distance30){
        cout << "Point15: (" << x15 << "," << y15 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x15;
        centroidX1 = centroidX1/2;
        centroidY1 += y15;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point15: (" << x15 << "," << y15 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x15;
        centroidX2 = centroidX2/2;
        centroidY2 += y15;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 16
    double distance31 = sqrt(pow(x16 - centroidX1, 2) + pow(y16 - centroidY1, 2));
    double distance32 = sqrt(pow(x16 - centroidX2, 2) + pow(y16 - centroidY2, 2));
    if (distance31 < distance32){
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x16;
        centroidX1 = centroidX1/2;
        centroidY1 += y16;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x16;
        centroidX2 = centroidX2/2;
        centroidY2 += y16;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 17
    double distance33 = sqrt(pow(x17 - centroidX1, 2) + pow(y17 - centroidY1, 2));
    double distance34 = sqrt(pow(x17 - centroidX2, 2) + pow(y17 - centroidY2, 2));
    if (distance33 < distance34){
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x17;
        centroidX1 = centroidX1/2;
        centroidY1 += y17;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x17;
        centroidX2 = centroidX2/2;
        centroidY2 += y17;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 18
    double distance35 = sqrt(pow(x18 - centroidX1, 2) + pow(y18 - centroidY1, 2));
    double distance36 = sqrt(pow(x18 - centroidX2, 2) + pow(y18 - centroidY2, 2));
    if (distance35 < distance36){
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x18;
        centroidX1 = centroidX1/2;
        centroidY1 += y18;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x18;
        centroidX2 = centroidX2/2;
        centroidY2 += y18;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 19
    double distance37 = sqrt(pow(x19 - centroidX1, 2) + pow(y19 - centroidY1, 2));
    double distance38 = sqrt(pow(x19 - centroidX2, 2) + pow(y19 - centroidY2, 2));
    if (distance37 < distance38){
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x19;
        centroidX1 = centroidX1/2;
        centroidY1 += y19;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x19;
        centroidX2 = centroidX2/2;
        centroidY2 += y19;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    //Now data point 20
    double distance39 = sqrt(pow(x20 - centroidX1, 2) + pow(y20 - centroidY1, 2));
    double distance40 = sqrt(pow(x20 - centroidX2, 2) + pow(y20 - centroidY2, 2));
    if (distance39 < distance40){
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x20;
        centroidX1 = centroidX1/2;
        centroidY1 += y20;
        centroidY1 = centroidY1/2;
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x20;
        centroidX2 = centroidX2/2;
        centroidY2 += y20;
        centroidY2 = centroidY2/2;
        cout << "(" << centroidX2 << "," << centroidY2  << ")" << "is the new position of centroid2.\n";
    }
    
    cout << "First iteration of K-Means is done. The next iteration of K-Means begins now. The programmer ";
    cout << " has chosen the maximum number of iterations to be THREE.\n\n";
    cout << "Centroid1 is at (" << centroidX1 << "," << centroidY1 << ") after iteration1.\n";
    cout << "Centroid2 is at (" << centroidX2 << "," << centroidY2 << ") after iteration1.\n";
    //NOW compare distance from each data point to each cluster center, and re assign datapoints
    // to new cluster if they are closer. For simplicity I am chosing to only iterate this step
    // 4 times.
    //iteration1 datapoint1
    double distance1iter1 = sqrt(pow(x1 - centroidX1, 2) + pow(y1 - centroidY1, 2));
    double distance2iter1 = sqrt(pow(x1 - centroidX2, 2) + pow(y1 - centroidY2, 2));
    if (distance1iter1 < distance2iter1){
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x1;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y1;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x1;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y1;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint2 iter2
    double distance3iter1 = sqrt(pow(x2 - centroidX1, 2) + pow(y2 - centroidY1, 2));
    double distance4iter1 = sqrt(pow(x2 - centroidX2, 2) + pow(y2 - centroidY2, 2));
    if (distance3iter1 < distance4iter1){
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x2;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y2;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x2;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y2;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint3 iter2
    double distance5iter1 = sqrt(pow(x3 - centroidX1, 2) + pow(y3 - centroidY1, 2));
    double distance6iter1 = sqrt(pow(x3 - centroidX2, 2) + pow(y3 - centroidY2, 2));
    if (distance5iter1 < distance6iter1){
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x3;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y3;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x3;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y3;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint4 iter2
    double distance7iter1 = sqrt(pow(x4 - centroidX1, 2) + pow(y4 - centroidY1, 2));
    double distance8iter1 = sqrt(pow(x4 - centroidX2, 2) + pow(y4 - centroidY2, 2));
    if (distance7iter1 < distance8iter1){
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x4;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y4;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x4;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y4;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint5 iter2
    double distance9iter1 = sqrt(pow(x5 - centroidX1, 2) + pow(y5 - centroidY1, 2));
    double distance10iter1 = sqrt(pow(x5 - centroidX2, 2) + pow(y5 - centroidY2, 2));
    if (distance9iter1 < distance10iter1){
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x5;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y5;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x5;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y5;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint6 iter2
    double distance11iter1 = sqrt(pow(x6 - centroidX1, 2) + pow(y6 - centroidY1, 2));
    double distance12iter1 = sqrt(pow(x6 - centroidX2, 2) + pow(y6 - centroidY2, 2));
    if (distance11iter1 < distance12iter1){
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x6;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y6;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x6;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y6;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint7 iter2
    double distance13iter1 = sqrt(pow(x7 - centroidX1, 2) + pow(y7 - centroidY1, 2));
    double distance14iter1 = sqrt(pow(x7 - centroidX2, 2) + pow(y7 - centroidY2, 2));
    if (distance13iter1 < distance14iter1){
        cout << "Point6: (" << x7 << "," << y7 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x7;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y7;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point7: (" << x7 << "," << y7 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x7;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y7;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint8 iter2
    double distance15iter1 = sqrt(pow(x8 - centroidX1, 2) + pow(y8 - centroidY1, 2));
    double distance16iter1 = sqrt(pow(x8 - centroidX2, 2) + pow(y8 - centroidY2, 2));
    if (distance15iter1 < distance16iter1){
        cout << "Point6: (" << x8 << "," << y8 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x8;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y8;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point8: (" << x8 << "," << y8 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x8;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y8;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint9 iter2
    double distance17iter1 = sqrt(pow(x9 - centroidX1, 2) + pow(y9 - centroidY1, 2));
    double distance18iter1 = sqrt(pow(x9 - centroidX2, 2) + pow(y9 - centroidY2, 2));
    if (distance17iter1 < distance18iter1){
        cout << "Point6: (" << x9 << "," << y9 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x9;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y9;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point9: (" << x9 << "," << y9 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x9;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y9;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint10 iter2
    double distance19iter1 = sqrt(pow(x10 - centroidX1, 2) + pow(y10 - centroidY1, 2));
    double distance20iter1 = sqrt(pow(x10 - centroidX2, 2) + pow(y10 - centroidY2, 2));
    if (distance19iter1 < distance20iter1){
        cout << "Point6: (" << x10 << "," << y10 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x10;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y10;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point10: (" << x10 << "," << y10 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x10;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y10;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint11 iter2
    double distance21iter1 = sqrt(pow(x11 - centroidX1, 2) + pow(y11 - centroidY1, 2));
    double distance22iter1 = sqrt(pow(x11 - centroidX2, 2) + pow(y11 - centroidY2, 2));
    if (distance21iter1 < distance22iter1){
        cout << "Point6: (" << x11 << "," << y11 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x11;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y11;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point11: (" << x11 << "," << y11 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x11;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y11;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint12 iter2
    double distance23iter1 = sqrt(pow(x12 - centroidX1, 2) + pow(y12 - centroidY1, 2));
    double distance24iter1 = sqrt(pow(x12 - centroidX2, 2) + pow(y12 - centroidY2, 2));
    if (distance23iter1 < distance24iter1){
        cout << "Point11: (" << x12 << "," << y12 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x12;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y12;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point12: (" << x12 << "," << y12 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x12;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y12;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint13 iter2
    double distance25iter1 = sqrt(pow(x13 - centroidX1, 2) + pow(y13 - centroidY1, 2));
    double distance26iter1 = sqrt(pow(x13 - centroidX2, 2) + pow(y13 - centroidY2, 2));
    if (distance25iter1 < distance26iter1){
        cout << "Point6: (" << x13 << "," << y13 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x13;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y13;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point13: (" << x13 << "," << y13 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x13;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y13;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint14 iter2
    double distance27iter1 = sqrt(pow(x14 - centroidX1, 2) + pow(y14 - centroidY1, 2));
    double distance28iter1 = sqrt(pow(x14 - centroidX2, 2) + pow(y14 - centroidY2, 2));
    if (distance27iter1 < distance28iter1){
        cout << "Point6: (" << x14 << "," << y14 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x14;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y14;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point14: (" << x14 << "," << y14 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x14;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y14;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint15 iter2
    double distance29iter1 = sqrt(pow(x15 - centroidX1, 2) + pow(y15 - centroidY1, 2));
    double distance30iter1 = sqrt(pow(x15 - centroidX2, 2) + pow(y15 - centroidY2, 2));
    if (distance29iter1 < distance30iter1){
        cout << "Point6: (" << x15 << "," << y15 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x15;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y15;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point15: (" << x15 << "," << y15 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x15;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y15;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint16 iter2
    double distance31iter1 = sqrt(pow(x16 - centroidX1, 2) + pow(y16 - centroidY1, 2));
    double distance32iter1 = sqrt(pow(x16 - centroidX2, 2) + pow(y16 - centroidY2, 2));
    if (distance31iter1 < distance32iter1){
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x16;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y16;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x16;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y16;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint17 iter2
    double distance33iter1 = sqrt(pow(x17 - centroidX1, 2) + pow(y17 - centroidY1, 2));
    double distance34iter1 = sqrt(pow(x17 - centroidX2, 2) + pow(y17 - centroidY2, 2));
    if (distance33iter1 < distance34iter1){
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x17;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y17;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x17;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y17;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint18 iter2
    double distance35iter1 = sqrt(pow(x18 - centroidX1, 2) + pow(y18 - centroidY1, 2));
    double distance36iter1 = sqrt(pow(x18 - centroidX2, 2) + pow(y18 - centroidY2, 2));
    if (distance35iter1 < distance36iter1){
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x18;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y18;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x18;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y18;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint19 iter2
    double distance37iter1 = sqrt(pow(x19 - centroidX1, 2) + pow(y19 - centroidY1, 2));
    double distance38iter1 = sqrt(pow(x19 - centroidX2, 2) + pow(y19 - centroidY2, 2));
    if (distance37iter1 < distance38iter1){
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x19;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y19;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x19;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y19;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint20 iter2
    double distance39iter1 = sqrt(pow(x20 - centroidX1, 2) + pow(y20 - centroidY1, 2));
    double distance40iter1 = sqrt(pow(x20 - centroidX2, 2) + pow(y20 - centroidY2, 2));
    if (distance39iter1 < distance40iter1){
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x20;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y20;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x20;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y20;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }

    //begin iteration 3
    cout << "Second iteration of K-Means is done. The last iteration of K-Means begins now. The programmer ";
    cout << " has chosen the maximum number of iterations to be THREE.\n\n";
    cout << "Centroid1 is at (" << centroidX1 << "," << centroidY1 << ") after iteration2.\n";
    cout << "Centroid2 is at (" << centroidX2 << "," << centroidY2 << ") after iteration2.\n";
    //NOW compare distance from each data point to each cluster center, and re assign datapoints
    // to new cluster if they are closer. For simplicity I am chosing to only iterate this step
    // 3 times.
    //iteration3 datapoint1
    double distance1iter2 = sqrt(pow(x1 - centroidX1, 2) + pow(y1 - centroidY1, 2));
    double distance2iter2 = sqrt(pow(x1 - centroidX2, 2) + pow(y1 - centroidY2, 2));
    if (distance1iter2 < distance2iter2){
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x1;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y1;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x1;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y1;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint2 iter2
    double distance3iter2 = sqrt(pow(x2 - centroidX1, 2) + pow(y2 - centroidY1, 2));
    double distance4iter2 = sqrt(pow(x2 - centroidX2, 2) + pow(y2 - centroidY2, 2));
    if (distance3iter2 < distance4iter2){
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x2;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y2;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x2;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y2;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint3 iter2
    double distance5iter2 = sqrt(pow(x3 - centroidX1, 2) + pow(y3 - centroidY1, 2));
    double distance6iter2 = sqrt(pow(x3 - centroidX2, 2) + pow(y3 - centroidY2, 2));
    if (distance5iter2 < distance6iter2){
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x3;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y3;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x3;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y3;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint4 iter2
    double distance7iter2 = sqrt(pow(x4 - centroidX1, 2) + pow(y4 - centroidY1, 2));
    double distance8iter2 = sqrt(pow(x4 - centroidX2, 2) + pow(y4 - centroidY2, 2));
    if (distance7iter2 < distance8iter2){
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x4;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y4;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x4;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y4;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint5 iter2
    double distance9iter2 = sqrt(pow(x5 - centroidX1, 2) + pow(y5 - centroidY1, 2));
    double distance10iter2 = sqrt(pow(x5 - centroidX2, 2) + pow(y5 - centroidY2, 2));
    if (distance9iter2 < distance10iter2){
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x5;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y5;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x5;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y5;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint6 iter2
    double distance11iter2 = sqrt(pow(x6 - centroidX1, 2) + pow(y6 - centroidY1, 2));
    double distance12iter2 = sqrt(pow(x6 - centroidX2, 2) + pow(y6 - centroidY2, 2));
    if (distance11iter2 < distance12iter2){
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x6;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y6;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x6;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y6;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint7 iter2
    double distance13iter2 = sqrt(pow(x7 - centroidX1, 2) + pow(y7 - centroidY1, 2));
    double distance14iter2 = sqrt(pow(x7 - centroidX2, 2) + pow(y7 - centroidY2, 2));
    if (distance13iter2 < distance14iter2){
        cout << "Point7: (" << x7 << "," << y7 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x7;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y7;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point7: (" << x7 << "," << y7 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x7;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y7;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint8 iter2
    double distance15iter2 = sqrt(pow(x8 - centroidX1, 2) + pow(y8 - centroidY1, 2));
    double distance16iter2 = sqrt(pow(x8 - centroidX2, 2) + pow(y8 - centroidY2, 2));
    if (distance15iter2 < distance16iter2){
        cout << "Point8: (" << x8 << "," << y8 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x8;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y8;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point8: (" << x8 << "," << y8 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x8;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y8;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint9 iter2
    double distance17iter2 = sqrt(pow(x9 - centroidX1, 2) + pow(y9 - centroidY1, 2));
    double distance18iter2 = sqrt(pow(x9 - centroidX2, 2) + pow(y9 - centroidY2, 2));
    if (distance17iter2 < distance18iter2){
        cout << "Point9: (" << x9 << "," << y9 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x9;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y9;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point9: (" << x9 << "," << y9 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x9;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y9;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint10 iter2
    double distance19iter2 = sqrt(pow(x10 - centroidX1, 2) + pow(y10 - centroidY1, 2));
    double distance20iter2 = sqrt(pow(x10 - centroidX2, 2) + pow(y10 - centroidY2, 2));
    if (distance19iter2 < distance20iter2){
        cout << "Point10: (" << x10 << "," << y10 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x10;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y10;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point10: (" << x10 << "," << y10 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x10;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y10;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint11 iter2
    double distance21iter2 = sqrt(pow(x11 - centroidX1, 2) + pow(y11 - centroidY1, 2));
    double distance22iter2 = sqrt(pow(x11 - centroidX2, 2) + pow(y11 - centroidY2, 2));
    if (distance21iter2 < distance22iter2){
        cout << "Point11: (" << x11 << "," << y11 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x11;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y11;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point11: (" << x11 << "," << y11 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x11;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y11;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint12 iter2
    double distance23iter2 = sqrt(pow(x12 - centroidX1, 2) + pow(y12 - centroidY1, 2));
    double distance24iter2 = sqrt(pow(x12 - centroidX2, 2) + pow(y12 - centroidY2, 2));
    if (distance23iter2 < distance24iter2){
        cout << "Point12: (" << x12 << "," << y12 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x12;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y12;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point12: (" << x12 << "," << y12 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x12;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y12;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint13 iter2
    double distance25iter2 = sqrt(pow(x13 - centroidX1, 2) + pow(y13 - centroidY1, 2));
    double distance26iter2 = sqrt(pow(x13 - centroidX2, 2) + pow(y13 - centroidY2, 2));
    if (distance25iter2 < distance26iter2){
        cout << "Point13: (" << x13 << "," << y13 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x13;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y13;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point13: (" << x13 << "," << y13 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x13;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y13;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint14 iter2
    double distance27iter2 = sqrt(pow(x14 - centroidX1, 2) + pow(y14 - centroidY1, 2));
    double distance28iter2 = sqrt(pow(x14 - centroidX2, 2) + pow(y14 - centroidY2, 2));
    if (distance27iter2 < distance28iter2){
        cout << "Point14: (" << x14 << "," << y14 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x14;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y14;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point14: (" << x14 << "," << y14 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x14;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y14;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint15 iter2
    double distance29iter2 = sqrt(pow(x15 - centroidX1, 2) + pow(y15 - centroidY1, 2));
    double distance30iter2 = sqrt(pow(x15 - centroidX2, 2) + pow(y15 - centroidY2, 2));
    if (distance29iter2 < distance30iter2){
        cout << "Point15: (" << x15 << "," << y15 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x15;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y15;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point15: (" << x15 << "," << y15 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x15;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y15;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint16 iter2
    double distance31iter2 = sqrt(pow(x16 - centroidX1, 2) + pow(y16 - centroidY1, 2));
    double distance32iter2 = sqrt(pow(x16 - centroidX2, 2) + pow(y16 - centroidY2, 2));
    if (distance31iter2 < distance32iter2){
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x16;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y16;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x16;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y16;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint17 iter2
    double distance33iter2 = sqrt(pow(x17 - centroidX1, 2) + pow(y17 - centroidY1, 2));
    double distance34iter2 = sqrt(pow(x17 - centroidX2, 2) + pow(y17 - centroidY2, 2));
    if (distance33iter2 < distance34iter2){
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x17;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y17;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x17;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y17;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint18 iter2
    double distance35iter2 = sqrt(pow(x18 - centroidX1, 2) + pow(y18 - centroidY1, 2));
    double distance36iter2 = sqrt(pow(x18 - centroidX2, 2) + pow(y18 - centroidY2, 2));
    if (distance35iter2 < distance36iter2){
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x18;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y18;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x18;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y18;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint19 iter2
    double distance37iter2 = sqrt(pow(x19 - centroidX1, 2) + pow(y19 - centroidY1, 2));
    double distance38iter2 = sqrt(pow(x19 - centroidX2, 2) + pow(y19 - centroidY2, 2));
    if (distance37iter2 < distance38iter2){
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x19;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y19;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x19;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y19;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n";
    }
    
    //datapoint20 iter2
    double distance39iter2 = sqrt(pow(x20 - centroidX1, 2) + pow(y20 - centroidY1, 2));
    double distance40iter2 = sqrt(pow(x20 - centroidX2, 2) + pow(y20 - centroidY2, 2));
    if (distance39iter2 < distance40iter2){
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster1." << endl;
        cluster1++;
        centroidX1 += x20;//adding values for euclidian distance
        centroidX1 = centroidX1/2;//dividing values for euclidian distance
        centroidY1 += y20;//adding values for euclidian distance
        centroidY1 = centroidY1/2;//dividing values for euclidian distance
        cout << "(" << centroidX1 << "," << centroidY1 << ")" << "is the new position of centroid1.\n\n";
    }
    else{
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster2." << endl;
        cluster2++;
        centroidX2 += x20;//adding values for euclidian distance
        centroidX2 = centroidX2/2;//dividing values for euclidian distance
        centroidY2 += y20;//adding values for euclidian distance
        centroidY2 = centroidY2/2;//dividing values for euclidian distance
        cout << "(" << centroidX2 << "," << centroidY2 << ")" << "is the new position of centroid2.\n\n";
    }
    //end euclidian K=2
    
    //START euclidian K=4
    double centroidKX1 = x19, centroidKY1 =  y19;//initial cintroid1 chosen at random for K=4
    double centroidKX2 = x20, centroidKY2 =  y20;//initial cintroid2 chosen at random for K=4
    double centroidKX3 = x10, centroidKY3 =  y1;//initial cintroid3 chosen at random for K=4
    double centroidKX4 = x11, centroidKY4 =  y2;//initial cintroid4 chosen at random for K=4
    cout << "Centroid1 for K=4 is randomly initiated at (" << centroidKX1 << "," << centroidKY1 << ").\n";
    cout << "Centroid2 for K=4 is randomly initiated at (" << centroidKX2 << "," << centroidKY2 << ").\n";
    cout << "Centroid3 for K=4 is randomly initiated at (" << centroidKX3 << "," << centroidKY3 << ").\n";
    cout << "Centroid4 for K=4 is randomly initiated at (" << centroidKX4 << "," << centroidKY4 << ").\n";
    //START data point 1
    double distanceK1 = sqrt(pow(x1 - centroidKX1, 2) + pow(y1 - centroidKY1, 2));
    double distanceK2 = sqrt(pow(x1 - centroidKX2, 2) + pow(y1 - centroidKY2, 2));
    double distanceK3 = sqrt(pow(x1 - centroidKX3, 2) + pow(y1 - centroidKY3, 2));
    double distanceK4 = sqrt(pow(x1 - centroidKX4, 2) + pow(y1 - centroidKY4, 2));
    double minimum = std::min({distanceK1,distanceK2,distanceK3,distanceK4});//assign var to min distance i.e. closest centroid
    if (minimum == distanceK1){
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX1 += x1;//adding values for euclidian distance
        centroidKX1 = centroidKX1/2;//dividing values for euclidian distance
        centroidKY1 += y1;//adding values for euclidian distance
        centroidKY1 = centroidKY1/2;//dividing values for euclidian distance
        cout << "(" << centroidKX1 << "," << centroidKY1 << ")" << "is the position of centroid1.\n";
    }
    else if (minimum == distanceK2){
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x1;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y1;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (minimum == distanceK3){
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x1;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y1;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point1: (" << x1 << "," << y1 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x1;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y1;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data point 2
    double distanceQ1 = sqrt(pow(x2 - centroidKX1, 2) + pow(y2 - centroidKY1, 2));
    double distanceQ2 = sqrt(pow(x2 - centroidKX2, 2) + pow(y2 - centroidKY2, 2));
    double distanceQ3 = sqrt(pow(x2 - centroidKX3, 2) + pow(y2 - centroidKY3, 2));
    double distanceQ4 = sqrt(pow(x2 - centroidKX4, 2) + pow(y2 - centroidKY4, 2));
    double minimumX2 = std::min({distanceQ1,distanceQ2,distanceQ3,distanceQ4});//assign var to min distance i.e. closest centroid
    if (minimumX2 == distanceQ1){
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x2;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y2;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (minimumX2 == distanceQ2){
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x2;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y2;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (minimumX2 == distanceQ3){
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x2;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y2;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point2: (" << x2 << "," << y2 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x2;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y2;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data point3:
    double distanceW1 = sqrt(pow(x3 - centroidKX1, 2) + pow(y3 - centroidKY1, 2));
    double distanceW2 = sqrt(pow(x3 - centroidKX2, 2) + pow(y3 - centroidKY2, 2));
    double distanceW3 = sqrt(pow(x3 - centroidKX3, 2) + pow(y3 - centroidKY3, 2));
    double distanceW4 = sqrt(pow(x3 - centroidKX4, 2) + pow(y3 - centroidKY4, 2));
    double minimumX3 = std::min({distanceW1,distanceW2,distanceW3,distanceW4});//assign var to min distance i.e. closest centroid
    if (minimumX3 == distanceW1){
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x3;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y3;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (minimumX3 == distanceW2){
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x3;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y3;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (minimumX3 == distanceW3){
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x3;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y3;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point3: (" << x3 << "," << y3 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x3;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y3;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data point4:
    double distanceE1 = sqrt(pow(x4 - centroidKX1, 2) + pow(y4 - centroidKY1, 2));
    double distanceE2 = sqrt(pow(x4 - centroidKX2, 2) + pow(y4 - centroidKY2, 2));
    double distanceE3 = sqrt(pow(x4 - centroidKX3, 2) + pow(y4 - centroidKY3, 2));
    double distanceE4 = sqrt(pow(x4 - centroidKX4, 2) + pow(y4 - centroidKY4, 2));
    double minimumX4 = std::min({distanceE1,distanceE2,distanceE3,distanceE4});//assign var to min distance i.e. closest centroid
    if (minimumX4 == distanceE1){
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x4;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y4;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (minimumX4 == distanceE2){
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x4;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y4;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (minimumX4 == distanceE3){
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x4;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y4;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point4: (" << x4 << "," << y4 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x4;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y4;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data point5:
    double distanceR1 = sqrt(pow(x5 - centroidKX1, 2) + pow(y5 - centroidKY1, 2));
    double distanceR2 = sqrt(pow(x5 - centroidKX2, 2) + pow(y5 - centroidKY2, 2));
    double distanceR3 = sqrt(pow(x5 - centroidKX3, 2) + pow(y5 - centroidKY3, 2));
    double distanceR4 = sqrt(pow(x5 - centroidKX4, 2) + pow(y5 - centroidKY4, 2));
    double maximumX5 = std::min({distanceR1,distanceR2,distanceR3,distanceR4});//assign var to min distance i.e. closest centroid
    if (maximumX5 == distanceR1){
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x5;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y5;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (maximumX5 == distanceR2){
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x5;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y5;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (maximumX5 == distanceR3){
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x5;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y5;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point5: (" << x5 << "," << y5 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x5;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y5;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data point6:
    double distanceT1 = sqrt(pow(x6 - centroidKX1, 2) + pow(y6 - centroidKY1, 2));
    double distanceT2 = sqrt(pow(x6 - centroidKX2, 2) + pow(y6 - centroidKY2, 2));
    double distanceT3 = sqrt(pow(x6 - centroidKX3, 2) + pow(y6 - centroidKY3, 2));
    double distanceT4 = sqrt(pow(x6 - centroidKX4, 2) + pow(y6 - centroidKY4, 2));
    double maximumX6 = std::min({distanceT1,distanceT2,distanceT3,distanceT4});//assign var to min distance i.e. closest centroid
    if (maximumX6 == distanceT1){
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x6;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y6;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (maximumX6 == distanceT2){
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x6;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y6;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (maximumX6 == distanceT3){
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x6;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y6;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point6: (" << x6 << "," << y6 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x6;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y6;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data Point7:
    double distanceU1 = sqrt(pow(x7 - centroidKX1, 2) + pow(y7 - centroidKY1, 2));
    double distanceU2 = sqrt(pow(x7 - centroidKX2, 2) + pow(y7 - centroidKY2, 2));
    double distanceU3 = sqrt(pow(x7 - centroidKX3, 2) + pow(y7 - centroidKY3, 2));
    double distanceU4 = sqrt(pow(x7 - centroidKX4, 2) + pow(y7 - centroidKY4, 2));
    double maximumX7 = std::min({distanceU1,distanceU2,distanceU3,distanceU4});//assign var to min distance i.e. closest centroid
    if (maximumX7 == distanceU1){
        cout << "Point7: (" << x7 << "," << y7 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x7;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y7;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (maximumX7 == distanceU2){
        cout << "Point7: (" << x7 << "," << y7 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x7;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y7;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (maximumX7 == distanceU3){
        cout << "Point7: (" << x7 << "," << y7 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x7;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y7;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point7: (" << x7 << "," << y7 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x7;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y7;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data Point8:
    double distanceI1 = sqrt(pow(x8 - centroidKX1, 2) + pow(y8 - centroidKY1, 2));
    double distanceI2 = sqrt(pow(x8 - centroidKX2, 2) + pow(y8 - centroidKY2, 2));
    double distanceI3 = sqrt(pow(x8 - centroidKX3, 2) + pow(y8 - centroidKY3, 2));
    double distanceI4 = sqrt(pow(x8 - centroidKX4, 2) + pow(y8 - centroidKY4, 2));
    double maximumX8 = std::min({distanceI1,distanceI2,distanceI3,distanceI4});//assign var to min distance i.e. closest centroid
    if (maximumX8 == distanceI1){
        cout << "Point8: (" << x8 << "," << y8 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x8;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y8;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (maximumX8 == distanceI2){
        cout << "Point8: (" << x8 << "," << y8 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x8;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y8;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (maximumX8 == distanceI3){
        cout << "Point8: (" << x8 << "," << y8 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x8;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y8;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point8: (" << x8 << "," << y8 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x8;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y8;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data Point9:
    double distanceO1 = sqrt(pow(x9 - centroidKX1, 2) + pow(y9 - centroidKY1, 2));
    double distanceO2 = sqrt(pow(x9 - centroidKX2, 2) + pow(y9 - centroidKY2, 2));
    double distanceO3 = sqrt(pow(x9 - centroidKX3, 2) + pow(y9 - centroidKY3, 2));
    double distanceO4 = sqrt(pow(x9 - centroidKX4, 2) + pow(y9 - centroidKY4, 2));
    double maximumx9 = std::min({distanceO1,distanceO2,distanceO3,distanceO4});//assign var to min distance i.e. closest centroid
    if (maximumx9 == distanceO1){
        cout << "Point9: (" << x9 << "," << y9 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x9;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y9;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (maximumx9 == distanceO2){
        cout << "Point9: (" << x9 << "," << y9 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x9;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y9;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (maximumx9 == distanceO3){
        cout << "Point9: (" << x9 << "," << y9 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x9;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y9;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point9: (" << x9 << "," << y9 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x9;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y9;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data Point10:
    double distanceP1 = sqrt(pow(x10 - centroidKX1, 2) + pow(y10 - centroidKY1, 2));
    double distanceP2 = sqrt(pow(x10 - centroidKX2, 2) + pow(y10 - centroidKY2, 2));
    double distanceP3 = sqrt(pow(x10 - centroidKX3, 2) + pow(y10 - centroidKY3, 2));
    double distanceP4 = sqrt(pow(x10 - centroidKX4, 2) + pow(y10 - centroidKY4, 2));
    double maximumx10 = std::min({distanceP1,distanceP2,distanceP3,distanceP4});//assign var to min distance i.e. closest centroid
    if (maximumx10 == distanceP1){
        cout << "Point10: (" << x10 << "," << y10 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x10;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y10;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (maximumx10 == distanceP2){
        cout << "Point10: (" << x10 << "," << y10 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x10;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y10;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (maximumx10 == distanceP3){
        cout << "Point10: (" << x10 << "," << y10 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x10;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y10;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point10: (" << x10 << "," << y10 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x10;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y10;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data Point11:
    double distanceVV1 = sqrt(pow(x11 - centroidKX1, 2) + pow(y11 - centroidKY1, 2));
    double distanceVV2 = sqrt(pow(x11 - centroidKX2, 2) + pow(y11 - centroidKY2, 2));
    double distanceVV3 = sqrt(pow(x11 - centroidKX3, 2) + pow(y11 - centroidKY3, 2));
    double distanceVV4 = sqrt(pow(x11 - centroidKX4, 2) + pow(y11 - centroidKY4, 2));
    double maximumx11 = std::min({distanceVV1,distanceVV2,distanceVV3,distanceVV4});//assign var to min distance i.e. closest centroid
    if (maximumx11 == distanceVV1){
        cout << "Point11: (" << x11 << "," << y11 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x11;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y11;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (maximumx11 == distanceVV2){
        cout << "Point11: (" << x11 << "," << y11 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x11;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y11;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (maximumx11 == distanceVV3){
        cout << "Point11: (" << x11 << "," << y11 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x11;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y11;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point11: (" << x11 << "," << y11 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x11;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y11;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data Point12:
    double distanceV1 = sqrt(pow(x12 - centroidKX1, 2) + pow(y12 - centroidKY1, 2));
    double distanceV2 = sqrt(pow(x12 - centroidKX2, 2) + pow(y12 - centroidKY2, 2));
    double distanceV3 = sqrt(pow(x12 - centroidKX3, 2) + pow(y12 - centroidKY3, 2));
    double distanceV4 = sqrt(pow(x12 - centroidKX4, 2) + pow(y12 - centroidKY4, 2));
    double maximumx12 = std::min({distanceV1,distanceV2,distanceV3,distanceV4});//assign var to min distance i.e. closest centroid
    if (maximumx12 == distanceV1){
        cout << "Point12: (" << x12 << "," << y12 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x12;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y12;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (maximumx12 == distanceV2){
        cout << "Point12: (" << x12 << "," << y12 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x12;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y12;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (maximumx12 == distanceV3){
        cout << "Point12: (" << x12 << "," << y12 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x12;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y12;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point12: (" << x12 << "," << y12 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x12;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y12;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data Point13:
    double distanceA1 = sqrt(pow(x13 - centroidKX1, 2) + pow(y13 - centroidKY1, 2));
    double distanceA2 = sqrt(pow(x13 - centroidKX2, 2) + pow(y13 - centroidKY2, 2));
    double distanceA3 = sqrt(pow(x13 - centroidKX3, 2) + pow(y13 - centroidKY3, 2));
    double distanceA4 = sqrt(pow(x13 - centroidKX4, 2) + pow(y13 - centroidKY4, 2));
    double maximumx13 = std::min({distanceA1,distanceA2,distanceA3,distanceA4});//assign var to min distance i.e. closest centroid
    if (maximumx13 == distanceA1){
        cout << "Point13: (" << x13 << "," << y13 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x13;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y13;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid1.\n";
    }
    else if (maximumx13 == distanceA2){
        cout << "Point13: (" << x13 << "," << y13 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x13;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y13;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << "is the position of centroid2.\n";
    }
    else if (maximumx13 == distanceA3){
        cout << "Point13: (" << x13 << "," << y13 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x13;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y13;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << "is the position of centroid3.\n";
    }
    else {
        cout << "Point13: (" << x13 << "," << y13 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x13;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y13;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << "is the position of centroid4.\n";
    }
    
    //START data Point14:
    double distanceA5 = sqrt(pow(x14 - centroidKX1, 2) + pow(y14 - centroidKY1, 2));
    double distanceA6 = sqrt(pow(x14 - centroidKX2, 2) + pow(y14 - centroidKY2, 2));
    double distanceA7 = sqrt(pow(x14 - centroidKX3, 2) + pow(y14 - centroidKY3, 2));
    double distanceA8 = sqrt(pow(x14 - centroidKX4, 2) + pow(y14 - centroidKY4, 2));
    double maximumx14 = std::min({distanceA5,distanceA6,distanceA7,distanceA8});//assign var to min distance i.e. closest centroid
    if (maximumx14 == distanceA5){
        cout << "Point14: (" << x14 << "," << y14 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x14;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y14;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid1.\n";
    }
    else if (maximumx14 == distanceA6){
        cout << "Point14: (" << x14 << "," << y14 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x14;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y14;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid2.\n";
    }
    else if (maximumx14 == distanceA7){
        cout << "Point14: (" << x14 << "," << y14 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x14;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y14;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << " is the position of centroid3.\n";
    }
    else {
        cout << "Point14: (" << x14 << "," << y14 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x14;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y14;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << " is the position of centroid4.\n";
    }
    
    //START data Point15:
    double distanceA9 = sqrt(pow(x15 - centroidKX1, 2) + pow(y15 - centroidKY1, 2));
    double distanceA10 = sqrt(pow(x15 - centroidKX2, 2) + pow(y15 - centroidKY2, 2));
    double distanceA11 = sqrt(pow(x15 - centroidKX3, 2) + pow(y15 - centroidKY3, 2));
    double distanceA12 = sqrt(pow(x15 - centroidKX4, 2) + pow(y15 - centroidKY4, 2));
    double maximumx15 = std::min({distanceA9,distanceA10,distanceA11,distanceA12});//assign var to min distance i.e. closest centroid
    if (maximumx15 == distanceA9){
        cout << "Point15: (" << x15 << "," << y15 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x15;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y15;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid1.\n";
    }
    else if (maximumx15 == distanceA10){
        cout << "Point15: (" << x15 << "," << y15 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x15;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y15;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid2.\n";
    }
    else if (maximumx15 == distanceA11){
        cout << "Point15: (" << x15 << "," << y15 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x15;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y15;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << " is the position of centroid3.\n";
    }
    else {
        cout << "Point15: (" << x15 << "," << y15 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x15;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y15;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << " is the position of centroid4.\n";
    }
    
    //START data Point16:
    double distanceA13 = sqrt(pow(x16 - centroidKX1, 2) + pow(y16 - centroidKY1, 2));
    double distanceA14 = sqrt(pow(x16 - centroidKX2, 2) + pow(y16 - centroidKY2, 2));
    double distanceA15 = sqrt(pow(x16 - centroidKX3, 2) + pow(y16 - centroidKY3, 2));
    double distanceA16 = sqrt(pow(x16 - centroidKX4, 2) + pow(y16 - centroidKY4, 2));
    double maximumx16 = std::min({distanceA13,distanceA14,distanceA15,distanceA16});//assign var to min distance i.e. closest centroid
    if (maximumx16 == distanceA13){
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x16;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y16;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid1.\n";
    }
    else if (maximumx16 == distanceA14){
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x16;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y16;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid2.\n";
    }
    else if (maximumx16 == distanceA15){
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x16;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y16;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << " is the position of centroid3.\n";
    }
    else {
        cout << "Point16: (" << x16 << "," << y16 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x16;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y16;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << " is the position of centroid4.\n";
    }
    
    //START data Point17:
    double distanceA20 = sqrt(pow(x17 - centroidKX1, 2) + pow(y17 - centroidKY1, 2));
    double distanceA21 = sqrt(pow(x17 - centroidKX2, 2) + pow(y17 - centroidKY2, 2));
    double distanceA22 = sqrt(pow(x17 - centroidKX3, 2) + pow(y17 - centroidKY3, 2));
    double distanceA23 = sqrt(pow(x17 - centroidKX4, 2) + pow(y17 - centroidKY4, 2));
    double maximumx17 = std::min({distanceA20,distanceA21,distanceA22,distanceA23});//assign var to min distance i.e. closest centroid
    if (maximumx17 == distanceA20){
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x17;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y17;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid1.\n";
    }
    else if (maximumx17 == distanceA21){
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x17;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y17;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid2.\n";
    }
    else if (maximumx17 == distanceA22){
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x17;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y17;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << " is the position of centroid3.\n";
    }
    else {
        cout << "Point17: (" << x17 << "," << y17 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x17;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y17;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << " is the position of centroid4.\n";
    }
    
    //START data Point18:
    double distanceA30 = sqrt(pow(x18 - centroidKX1, 2) + pow(y18 - centroidKY1, 2));
    double distanceA31 = sqrt(pow(x18 - centroidKX2, 2) + pow(y18 - centroidKY2, 2));
    double distanceA32 = sqrt(pow(x18 - centroidKX3, 2) + pow(y18 - centroidKY3, 2));
    double distanceA33 = sqrt(pow(x18 - centroidKX4, 2) + pow(y18 - centroidKY4, 2));
    double maximumx18 = std::min({distanceA30,distanceA31,distanceA32,distanceA33});//assign var to min distance i.e. closest centroid
    if (maximumx18 == distanceA30){
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x18;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y18;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid1.\n";
    }
    else if (maximumx18 == distanceA31){
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x18;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y18;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid2.\n";
    }
    else if (maximumx18 == distanceA32){
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x18;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y18;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << " is the position of centroid3.\n";
    }
    else {
        cout << "Point18: (" << x18 << "," << y18 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x18;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y18;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << " is the position of centroid4.\n";
    }
    
    //START data Point19:
    double distanceA40 = sqrt(pow(x19 - centroidKX1, 2) + pow(y19 - centroidKY1, 2));
    double distanceA41 = sqrt(pow(x19 - centroidKX2, 2) + pow(y19 - centroidKY2, 2));
    double distanceA42 = sqrt(pow(x19 - centroidKX3, 2) + pow(y19 - centroidKY3, 2));
    double distanceA43 = sqrt(pow(x19 - centroidKX4, 2) + pow(y19 - centroidKY4, 2));
    double maximumx19 = std::min({distanceA40,distanceA41,distanceA42,distanceA43});//assign var to min distance i.e. closest centroid
    if (maximumx19 == distanceA40){
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x19;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y19;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid1.\n";
    }
    else if (maximumx19 == distanceA41){
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x19;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y19;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid2.\n";
    }
    else if (maximumx19 == distanceA42){
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x19;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y19;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << " is the position of centroid3.\n";
    }
    else {
        cout << "Point19: (" << x19 << "," << y19 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x19;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y19;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << " is the position of centroid4.\n";
    }
    
    //START data Point20:
    double distanceA50 = sqrt(pow(x20 - centroidKX1, 2) + pow(y20 - centroidKY1, 2));
    double distanceA51 = sqrt(pow(x20 - centroidKX2, 2) + pow(y20 - centroidKY2, 2));
    double distanceA52 = sqrt(pow(x20 - centroidKX3, 2) + pow(y20 - centroidKY3, 2));
    double distanceA53 = sqrt(pow(x20 - centroidKX4, 2) + pow(y20 - centroidKY4, 2));
    double maximumx20 = std::min({distanceA50,distanceA51,distanceA52,distanceA53});//assign var to min distance i.e. closest centroid
    if (maximumx20 == distanceA50){
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster1." << endl;
        clusterK1++;
        centroidKX2 += x20;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y20;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid1.\n";
    }
    else if (maximumx20 == distanceA51){
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster2." << endl;
        clusterK2++;
        centroidKX2 += x20;//adding values for euclidian distance
        centroidKX2 = centroidKX2/2;//dividing values for euclidian distance
        centroidKY2 += y20;//adding values for euclidian distance
        centroidKY2 = centroidKY2/2;//dividing values for euclidian distance
        cout << "(" << centroidKX2 << "," << centroidKY2 << ")" << " is the position of centroid2.\n";
    }
    else if (maximumx20 == distanceA52){
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster3." << endl;
        clusterK3++;
        centroidKX3 += x20;//adding values for euclidian distance
        centroidKX3 = centroidKX3/2;//dividing values for euclidian distance
        centroidKY3 += y20;//adding values for euclidian distance
        centroidKY3 = centroidKY3/2;//dividing values for euclidian distance
        cout << "(" << centroidKX3 << "," << centroidKY3 << ")" << " is the position of centroid3.\n";
    }
    else {
        cout << "Point20: (" << x20 << "," << y20 << ") is in cluster4." << endl;
        clusterK4++;
        centroidKX4 += x20;//adding values for euclidian distance
        centroidKX4 = centroidKX4/2;//dividing values for euclidian distance
        centroidKY4 += y20;//adding values for euclidian distance
        centroidKY4 = centroidKY4/2;//dividing values for euclidian distance
        cout << "(" << centroidKX4 << "," << centroidKY4 << ")" << " is the position of centroid4.\n";
    }
    //Now update centroids, then retest the data points to make sure they are in cluster of closest centroid.
    
    //Now manhattan distance
    cout << "\nStarting Manhattan Distance measurements!\n";
    double centroid1X = x19, centroid1Y =  y19;//initial cintroids chosen at random for K=2
    double centroid2X = x20, centroid2Y =  y20;//initial cintroids chosen at random for K=2
    //Data point1
    if (manhattan(x1, y1, centroid1X, centroid1Y) < manhattan(x1, y1, centroid2X, centroid2Y)){
        cout << "Point: (" << x1 << "," << y1 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x1;
        centroid1X = centroid1X/2;
        centroid1Y += y1;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x1 << "," << y1 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Data point2
    if (manhattan(x2, y2, centroid1X, centroid1Y) < manhattan(x2, y2, centroid2X, centroid2Y)){
        cout << "Point: (" << x2 << "," << y2 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x2;
        centroid1X = centroid1X/2;
        centroid1Y += y2;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x2 << "," << y2 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Data point3
    if (manhattan(x3, y3, centroid1X, centroid1Y) < manhattan(x3, y3, centroid2X, centroid2Y)){
        cout << "Point: (" << x3 << "," << y3 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x3;
        centroid1X = centroid1X/2;
        centroid1Y += y3;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x3 << "," << y3 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x4, y4, centroid1X, centroid1Y) < manhattan(x4, y4, centroid2X, centroid2Y)){
        cout << "Point: (" << x4 << "," << y4 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x4;
        centroid1X = centroid1X/2;
        centroid1Y += y4;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x4 << "," << y4 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x5, y5, centroid1X, centroid1Y) < manhattan(x5, y5, centroid2X, centroid2Y)){
        cout << "Point: (" << x5 << "," << y5 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x5;
        centroid1X = centroid1X/2;
        centroid1Y += y5;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x5 << "," << y5 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x6, y6, centroid1X, centroid1Y) < manhattan(x6, y6, centroid2X, centroid2Y)){
        cout << "Point: (" << x6 << "," << y6 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x6;
        centroid1X = centroid1X/2;
        centroid1Y += y6;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x6 << "," << y6 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid1X/2;
        centroid2Y += y1;
        centroid2Y = centroid1Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x7, y7, centroid1X, centroid1Y) < manhattan(x7, y7, centroid2X, centroid2Y)){
        cout << "Point: (" << x7 << "," << y7 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x7;
        centroid1X = centroid1X/2;
        centroid1Y += y7;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x7 << "," << y7 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x8, y8, centroid1X, centroid1Y) < manhattan(x8, y8, centroid2X, centroid2Y)){
        cout << "Point: (" << x8 << "," << y8 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x8;
        centroid1X = centroid1X/2;
        centroid1Y += y8;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x8 << "," << y8 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x9, y9, centroid1X, centroid1Y) < manhattan(x9, y9, centroid2X, centroid2Y)){
        cout << "Point: (" << x9 << "," << y9 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x9;
        centroid1X = centroid1X/2;
        centroid1Y += y9;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x9 << "," << y9 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x10, y10, centroid1X, centroid1Y) < manhattan(x10, y10, centroid2X, centroid2Y)){
        cout << "Point: (" << x10 << "," << y10 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x10;
        centroid1X = centroid1X/2;
        centroid1Y += y10;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x10 << "," << y10 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x11, y11, centroid1X, centroid1Y) < manhattan(x11, y11, centroid2X, centroid2Y)){
        cout << "Point: (" << x11 << "," << y11 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x11;
        centroid1X = centroid1X/2;
        centroid1Y += y11;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x11 << "," << y11 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x12, y12, centroid1X, centroid1Y) < manhattan(x12, y12, centroid2X, centroid2Y)){
        cout << "Point: (" << x12 << "," << y12 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x12;
        centroid1X = centroid1X/2;
        centroid1Y += y12;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x12 << "," << y12 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x13, y13, centroid1X, centroid1Y) < manhattan(x13, y13, centroid2X, centroid2Y)){
        cout << "Point: (" << x13 << "," << y13 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x13;
        centroid1X = centroid1X/2;
        centroid1Y += y13;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x13 << "," << y13 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x14, y14, centroid1X, centroid1Y) < manhattan(x14, y14, centroid2X, centroid2Y)){
        cout << "Point: (" << x14 << "," << y14 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x14;
        centroid1X = centroid1X/2;
        centroid1Y += y14;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x14 << "," << y14 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x15, y15, centroid1X, centroid1Y) < manhattan(x15, y15, centroid2X, centroid2Y)){
        cout << "Point: (" << x15 << "," << y15 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x15;
        centroid1X = centroid1X/2;
        centroid1Y += y15;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x15 << "," << y15 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x1;
        centroid2X = centroid2X/2;
        centroid2Y += y1;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x16, y16, centroid1X, centroid1Y) < manhattan(x16, y16, centroid2X, centroid2Y)){
        cout << "Point: (" << x16 << "," << y16 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x16;
        centroid1X = centroid1X/2;
        centroid1Y += y16;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x16 << "," << y16 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x16;
        centroid2X = centroid2X/2;
        centroid2Y += y16;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x17, y17, centroid1X, centroid1Y) < manhattan(x17, y17, centroid2X, centroid2Y)){
        cout << "Point: (" << x17 << "," << y17 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x17;
        centroid1X = centroid1X/2;
        centroid1Y += y17;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x17 << "," << y17 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x17;
        centroid2X = centroid2X/2;
        centroid2Y += y17;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x18, y18, centroid1X, centroid1Y) < manhattan(x18, y18, centroid2X, centroid2Y)){
        cout << "Point: (" << x18 << "," << y18 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x18;
        centroid1X = centroid1X/2;
        centroid1Y += y18;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x18 << "," << y18 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x18;
        centroid2X = centroid2X/2;
        centroid2Y += y18;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x19, y19, centroid1X, centroid1Y) < manhattan(x19, y19, centroid2X, centroid2Y)){
        cout << "Point: (" << x19 << "," << y19 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x19;
        centroid1X = centroid1X/2;
        centroid1Y += y19;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x19 << "," << y19 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x19;
        centroid2X = centroid2X/2;
        centroid2Y += y19;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Next Data Point
    if (manhattan(x20, y20, centroid1X, centroid1Y) < manhattan(x20, y20, centroid2X, centroid2Y)){
        cout << "Point: (" << x20 << "," << y20 << ") is in cluster1.\n";
        cluster11++;
        centroid1X += x20;
        centroid1X = centroid1X/2;
        centroid1Y += y20;
        centroid1Y = centroid1Y/2;
        cout << "(" << centroid1X << "," << centroid1Y << ")" << "is the new position of centroid1.\n";
    }
    else{
        cout << "Point: (" << x20 << "," << y20 << ") is in cluster2.\n";
        cluster22++;
        centroid2X += x20;
        centroid2X = centroid2X/2;
        centroid2Y += y20;
        centroid2Y = centroid2Y/2;
        cout << "(" << centroid2X << "," << centroid2Y << ")" << "is the new position of centroid2.\n";
    }
    //Now recalculate means of each cluster and compare centroids to means again. move data points from one cluster
    //to the different cluster if new centroid is closer to data point.
    cout << x1 <<" "<< x2 <<" "<< x3 <<" "<< x4 <<" "<< x5 <<" "<< x6 <<" "<< x7 <<" "<< x8 <<" "<< x9 <<" "<< x10<<" ";
    cout << x11 <<" " << x12 <<" " << x13 <<" " <<x14 <<" " <<x15<<" "<<x16<<" "<<x17<<" "<<x18<<" "<<x19<<" "<<x20 << endl << endl;
    cout << y1 <<" "<< y2 <<" "<< y3 <<" "<< y4 <<" "<< y5 <<" "<< y6 <<" "<< y7 <<" "<< y8 <<" "<< y9 <<" "<< y10<<" ";
    cout << y11 <<" " << y12 <<" " << y13 <<" " <<y14 <<" " <<y15<<" "<<y16<<" "<<y17<<" "<<y18<<" "<<y19<<" "<<y20 << endl << endl;
    return 0;
}
