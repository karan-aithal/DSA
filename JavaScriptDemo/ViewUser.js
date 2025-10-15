/ import "./App.css"
import React, { useState, useEffect } from "react";
import axios from "axios";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css";


const ViewUsers = () => {
  const [users, setUsers] = useState([]);
  const getData = () => {
    axios.get("http://localhost:4000/users")
      .then((response) => {
        console.log(response.data)
        setUsers(response.data);
      })
      .catch((error) => {
        console.log("Error in fetching data");
      });
  }
  return(
    <>
    <h1>View Users</h1>
    <button onClick={getData}>Get User Details</button>
    <table className="table table-bordered table-striped">
      <thead>
        <tr>
          <th> ID</th>
          <th> User Name</th>
        </tr>
      </thead>
      <tbody>
        {
          users.map((user)=>(
            <tr key={user.id}>
              <td>{user.id}</td>
              <td>{user.userName}</td>
              </tr>
          ))
        }
        </tbody>
    </table>
    
    </>
  )
}
export default ViewUsers;


// Why users are printing twice in console while calling useEffect when array is empty