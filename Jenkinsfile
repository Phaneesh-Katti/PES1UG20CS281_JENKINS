pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'g++ temp.cpp -o temp'
                 build job: 'PES1UG20CS281-1', wait: false
                 echo 'Build by CS281 successful'
            }
        }

        stage('Test') {
            steps {
                sh 'cat temp.cpp'
                echo 'Test by CS281 successful'
            }
        }

        stage('Deploy') {
            steps {
               
                echo 'Deploy by CS281 successful'
            }
        }
    }

    post {
        failure {
            
                echo 'CS281 - Pipeline Failed'
          
        }
    }
}
