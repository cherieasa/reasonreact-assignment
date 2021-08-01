[@react.component]
let make = (~method) => {
    let methodStyle = ReactDOM.Style.make(~fontSize="25px", ~display="flex", ~justifyContent="center", ~margin="16px 0px", ());
    <div style=(methodStyle)>{ReasonReact.string(method)} 
    </div>;
};