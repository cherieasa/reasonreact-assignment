[@react.component]
let make = (~name) => {
    let titleStyle = ReactDOM.Style.make(~display="flex", ~fontSize="50px", ~justifyContent="center", ());
    <div style=(titleStyle)>{ReasonReact.string("Name: " ++ name)} 
    </div>;
};