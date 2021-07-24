[@react.component]
let make = (~name) =>
    <div style=(ReactDOM.Style.make(~fontSize="50px", ()))>{ReasonReact.string("Name: " ++ name)} </div>;