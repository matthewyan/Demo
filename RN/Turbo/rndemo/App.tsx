/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 */

import React, { useState } from 'react';
import type {PropsWithChildren} from 'react';
import {
  Button,
  SafeAreaView,
  ScrollView,
  StatusBar,
  StyleSheet,
  Text,
  useColorScheme,
  View,
  Alert,
} from 'react-native';

import {
  Colors,
  DebugInstructions,
  Header,
  LearnMoreLinks,
  ReloadInstructions,
} from 'react-native/Libraries/NewAppScreen';

import RTNCalculator from 'rtn-calculator/js/NativeCalculator';

type SectionProps = PropsWithChildren<{
  title: string;
}>;


function App(): JSX.Element {
  const isDarkMode = useColorScheme() === 'dark';

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
  };

  const [result, setResult] = useState<number | null>(null);

  return (
    <View>
      <Text>Hello, World</Text>
    </View>
  );
  
  // return (
    // <SafeAreaView style={backgroundStyle}>
    //   <StatusBar
    //     barStyle={isDarkMode ? 'light-content' : 'dark-content'}
    //     backgroundColor={backgroundStyle.backgroundColor}
    //   />
    //   <Button
    //       onPress={() => Alert.alert('Button with adjusted color pressed')}
    //       title="Learn More"
    //       color="#841584"
    //       accessibilityLabel="Learn more about this purple button"
    //     />
      
    //   <Text style={{marginLeft: 20, marginTop: 20}}>
    //     3+7={result ?? '??'}
    //   </Text>
    //   <Button
    //     title="Compute"
    //     onPress={async () => {
    //       const value = await RTNCalculator?.add(3, 7);
    //       setResult(value ?? null);
    //     }}
    //   />

    // </SafeAreaView>
  // );
}

const styles = StyleSheet.create({
  sectionContainer: {
    marginTop: 32,
    paddingHorizontal: 24,
  },
  sectionTitle: {
    fontSize: 24,
    fontWeight: '600',
  },
  sectionDescription: {
    marginTop: 8,
    fontSize: 18,
    fontWeight: '400',
  },
  highlight: {
    fontWeight: '700',
  },
});

export default App;
