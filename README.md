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
