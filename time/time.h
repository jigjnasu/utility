/*
  Author : Rakesh Kumar
  Simple header file for all time related functions
 */

#ifndef TIME_H_
#define TIME_H_

#include <bits/stdc++.h>

using ll = long long int;

class Time {
public:
    static std::string date() {
        auto now = std::chrono::system_clock::now();
        auto timer = std::chrono::system_clock::to_time_t(now);
        std::tm bt = *std::localtime(&timer);
            std::ostringstream oss;
            oss << std::put_time(&bt, "%d/%m/%Y");
            return oss.str();
    }

    static std::string date_time() {
        auto now = std::chrono::system_clock::now();
        auto timer = std::chrono::system_clock::to_time_t(now);
        std::tm bt = *std::localtime(&timer);
            std::ostringstream oss;
            oss << std::put_time(&bt, "%d/%m/%Y %H:%M:%S");
            return oss.str();
    }

    static std::string date_time_ms() {
        auto now = std::chrono::system_clock::now();
        auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;
        auto timer = std::chrono::system_clock::to_time_t(now);
        std::tm bt = *std::localtime(&timer);
            std::ostringstream oss;
            oss << std::put_time(&bt, "%d/%m/%Y %H:%M:%S");
            oss << '.' << std::setfill('0') << std::setw(3) << ms.count();
            return oss.str();
    }

    static ll time_since_epoch_hours() {
        auto now = std::chrono::system_clock::now();
        return std::chrono::duration_cast<std::chrono::hours>(now.time_since_epoch()).count();
    }

    static ll time_since_epoch_minutes() {
        auto now = std::chrono::system_clock::now();
        return std::chrono::duration_cast<std::chrono::minutes>(now.time_since_epoch()).count();
    }

    static ll time_since_epoch_seconds() {
        auto now = std::chrono::system_clock::now();
        return std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch()).count();
    }

    static ll time_since_epoch_milliseconds() {
        auto now = std::chrono::system_clock::now();
        return std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
    }
};

#endif // TIME_H_
