#ifndef AEROPLANE_H
#define AEROPLANE_H

#include <string>
#include <vector>
#include <iostream>

#include "ApiData.cpp"

class Aeroplane {
  public:
    // Constructors:
    Aeroplane();
    Aeroplane(int data, web::json::value planeData);
    // Destructor
    ~Aeroplane();
    // Getters:
    int GetID();
    int GetCounter();
    std::string GetIcao();// experimental
    // Setters:
    void Update(int time, web::json::value planeData);
  protected:
    // Counter
    int _id;
    static int _idCtr;  // global variable for counting object ids
  private:
    // API data variables
    std::string _icao24;
    std::string _callsign;
    std::string _origin_country;
    int _time_position;
    int _last_contact;
    double _longitude;
    double _latitude;
    double _baro_altitude;
    bool _on_ground;
    double _velocity;
    double _true_track;
    double _vertical_rate;
    web::json::value _sensors;  // check validity after registering in the OpenSky Network!
    double _geo_altitude;
    std::string _squawk;
    bool _spi;
    int _position_source;
    // Time of the last update
    int _updated_at;
};


#endif /* AEROPLANE_H */