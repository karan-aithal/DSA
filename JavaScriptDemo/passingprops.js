export default function Test(){
    return(
        <>
        <h1>Parent Component</h1>
        <Child name="Saisha"/> 
        {/* name is the name of props that is passed from Parent-Test to child 
        Child" */}
        </>
    )
}


function Child(props){
    return(
        <>
       <h2>child Component</h2>
        <h4>Name passed from parent is {props.name}</h4>
        </>
    )
}