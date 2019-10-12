# Accde-coders
import 'package:flutter/material.dart';
import 'package:cloud_firestore/cloud_firestore.dart';

void main(){
  runApp(
    MaterialApp(
      title: "SRM HACKATHON",
      home: Scaffold(
        appBar: AppBar( title: Text("AccDeTx"),),
        body: Material(
          color: Colors.lightBlueAccent,
          child: Center(
          child: Text(
           " Crash Scenario",
            textDirection: TextDirection.ltr,
            style: TextStyle(color: Colors.white, fontSize: 40.00)
        ) ,



            ),
          ),

        ),
      ),
    )
  );
}

Reference for MPU6050final.ino: https://github.com/VRomanov89/EEEnthusiast/blob/master/MPU-6050%20Implementation/MPU6050_Implementation/MPU6050_Implementation.ino
