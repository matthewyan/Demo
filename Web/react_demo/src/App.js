import React, { PropsWithChildren } from 'react';
import logo from './logo.svg';
import './App.css';

function WithChildrenComponent(props: PropsWithChildren<{ title: string }>) {
  return (
    <div>
      <h1>{props.title}</h1>
      {props.children}
    </div>
  );
}

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <WithChildrenComponent title='hi'>
          World
        </WithChildrenComponent>
      </header>
    </div>
  );
}

export default App;
