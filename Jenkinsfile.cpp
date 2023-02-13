pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh 'mvn clean install'
        echo 'PES1UG20CS281 Build Stage Successful'
      }
    }
    stage('Test') {
      steps {
        sh 'mvn test'
        echo 'PES1UG20CS281 Test Stage Successful'
        post {
          always {
            junit 'target/surefire-reports/*.xml'
          }
        }
      }
    }
    stage('Deploy') {
      steps {
        sh 'mvn deploy'
        echo 'PES1UG20CS281 Deployment Successful'
      }
    }
  }
  post {
    failure {
      echo 'PES1UG20CS281 Pipeline Failed!'
    }
  }
}
