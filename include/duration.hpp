#ifndef DURATION_H
#define DURATION_H

class Duration
{
    private:
        int time;
        int alarm;
        bool checkAndUpdateAlarm();
    public:
        Duration();
        ~Duration();
        
        int getDuration();
        void Attribute(int t);
        
        bool tick();
        bool tick(int dt);

        bool alarmHasBeenSet();
        void setAlarm(int a);
};

#endif //DURATION_H