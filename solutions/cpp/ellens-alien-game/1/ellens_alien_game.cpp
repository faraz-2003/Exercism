namespace targets {
// TODO: Insert the code for the alien class here
    class Alien{
    public:
     Alien(int x, int y){
     x_coordinate = x;
     y_coordinate = y;
     }
     int x_coordinate{0};
     int y_coordinate{0};
     int get_health(){
         return health;
     }
     bool hit(){
         if(health>0)
         --health;

         return true;
     }
    bool is_alive(){
        if(health>0){
            return true;
        }else{
            return false;
        }
    }
    bool teleport(int x,int y){
        x_coordinate = x;
        y_coordinate = y;
        return true;
    }
    bool collision_detection(Alien temp){
        if((x_coordinate == temp.x_coordinate) and (y_coordinate == temp.y_coordinate)){
            return true;
        } else{
            return false;
        }
    }
    private:
     int health{3};
    };

}  // namespace targets
