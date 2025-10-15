// npm i react-router-dom
import { Link, Outlet } from "react-router-dom";


const Header =() =>{
    return (
        <nav>
            <Link to="Home">Home</Link> | <Link to="About">About</Link> | <Link to="Contact">Contact</Link>
            <Outlet/>
        </nav>
    )
}
export default Header;


// ---------------------------------


import Header from "./Component/Header";
import { BrowserRouter, Routes, Route } from "react-router-dom";
import Home from "./Component/Home";
import About from "./Component/About";
import Contact from "./Component/Contact";
function App() {


  return (
    <>
     <BrowserRouter>
     <Routes>
      <Route path="/" element={<Header/>}>
      <Route path="Home" element={<Home/>}/>
      <Route path="About" element={<About/>}/>
      <Route index element={<Contact/>}/>
      </Route>
     </Routes>
     </BrowserRouter>
    </>
  )
}


export default App

// f Contact is indexed, then in header Contact linked to "/" ryt?
// --------------------------------------------------------

import { useState } from "react";
import { useNavigate } from "react-router-dom";
import "bootstrap/dist/css/bootstrap.min.css";


const Login=() =>{
    const [data, setData] = useState({username:"", password:""});
    const[error, setError] = useState("");
    const navigate = useNavigate();


const validUserName= "Alex";
const validPassword= "12345";



const handleSubmit=(event)=>{
    event.preventDefault();
    if(data.username === validUserName && data.password === validPassword){
        navigate("/Home");
    }else{
        setError("Invalid username or password");
    }
}


const handleChange=(event)=>{
    let {name, value} = event.target;
    setData({...data, [name]:value});
    setError("");
}


return (
    <>
    <div className="container" style={{minHeight:"100vh", display:"flex", justifyContent:"center", alignItems:"center",backgroundColor:"lavender"}}>
       <form onSubmit={handleSubmit} style={{width:"300px", padding:"20px", border:"1px solid #ccc", borderRadius:"5px", backgroundColor:"white"}}>
        <h2>Login</h2>
        <div className="form-group">
            <label htmlFor="username">Username:</label>
            <input type="text" className="form-control" id="username" name="username" value={data.username} onChange={handleChange} />
        </div>
        <div className="form-group">
            <label htmlFor="password">password:</label>
            <input type="password" className="form-control" id="password" name="password" value={data.password} onChange={handleChange} />
        </div>
        <button type="submit" className="btn btn-primary">Login</button>
        {error && (
            <div className="text-danger mt-3 text-center">{error}</div>
        )}
        </form>
        </div>
    </>
)


}
export default Login;



// ---------------------------------------------
// using useParam hooks

import { useParams } from "react-router-dom";


const Home =() =>{
    const {userName} = useParams();


    return (
        <div style={{display:"flex", justifyContent:"center",alignItems:"center", height:"100vh", backgroundColor:"lavender"}}>
            <div style={{background:'#fff', borderRadius:'16px', padding:'40px', boxShadow:'0 4px 6px rgba(0,0,0,0.1)', textAlign:'center'}}>
                <p style={{fontStyle:"italic", fontSize:"20px"}}>Welcome, {userName}!</p>
                <hr style={{margin:"24px 0"}}/>
                <p>We are glad to to have you back.Explore the features below:</p>
                <button>Explore more</button>
            </div>
        </div>
    )
}
export default Home;

// -----------------------------------------------------------

import { useState } from "react";
import { useNavigate } from "react-router-dom";
import "bootstrap/dist/css/bootstrap.min.css";


const Login=() =>{
    const [data, setData] = useState({username:"", password:""});
    const[error, setError] = useState("");
    const navigate = useNavigate();


const validUserName= "Alex";
const validPassword= "12345";



const handleSubmit=(event)=>{
    event.preventDefault();
    if(data.username === validUserName && data.password === validPassword){
        navigate("/Home");
    }else{
        setError("Invalid username or password");
    }
}


const handleChange=(event)=>{
    let {name, value} = event.target;
    setData({...data, [name]:value});
    setError("");
}


return (
    <>
    <div className="container" style={{minHeight:"100vh", display:"flex", justifyContent:"center", alignItems:"center",backgroundColor:"lavender"}}>
       <form onSubmit={handleSubmit} style={{width:"300px", padding:"20px", border:"1px solid #ccc", borderRadius:"5px", backgroundColor:"white"}}>
        <h2>Login</h2>
        <div className="form-group">
            <label htmlFor="username">Username:</label>
            <input type="text" className="form-control" id="username" name="username" value={data.username} onChange={handleChange} />
        </div>
        <div className="form-group">
            <label htmlFor="password">password:</label>
            <input type="password" className="form-control" id="password" name="password" value={data.password} onChange={handleChange} />
        </div>
        <button type="submit" className="btn btn-primary">Login</button>
        {error && (
            <div className="text-danger mt-3 text-center">{error}</div>
        )}
        </form>
        </div>
    </>
)


}
export default Login;

// -----------------------------------------------------
// link, -- static navigation , user interaction
//  route-- dynamic navigation, 
//  useNavigate hooks


//import Header from "./Component/Header";
import { BrowserRouter, Routes, Route } from "react-router-dom";
import Home from "./Component/Home";
//import About from "./Component/About";
//import Contact from "./Component/Contact";
import Login from "./Component/Login";
function App() {


  return (
    <>
     <BrowserRouter>
     <Routes>
      {/* <Route path="/" element={<Header/>}>
      <Route path="Home" element={<Home/>}/>
      <Route path="About" element={<About/>}/>
      <Route index element={<Contact/>}/> */}
      <Route path="/" element={<Login/>}/>
      <Route path="/home/:userName" element={<Home/>}/>
    
     </Routes>
     </BrowserRouter>
    </>
  )
}


export default App



// -----

redux


1.Store - common data
2.Action - will have information about which reducer needs to be invoked and any additional data that needs to be passed to the reducer
3.Reducer - actual logic
4.Middleware

count(0) - store
increment reducer - increment logic - has access to store and action
step count is passed to the inc reducer, it already has access to store and hence the count value
count+step count->updated value of count- store ->rerender the comp to show the updated count
decrement reducer- decrement logic- has access to store and action


Increment Counter ->increment btn , step count-2
Decrement Counter ->decrement btn, step count - 1

action is a JS object that has two properties: type and payload(step count)


action.type="INCREMENT"
action.type="DECREMENT"



user has clicked on decrement button-> action object - type="DECREMENT", payload - step count
useDispatch -dispatches the action object to the corresponding reducer based on the action type

